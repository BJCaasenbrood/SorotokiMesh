function Mesh = remove(Mesh, varargin)
    v = Mesh.Node;
    f = Mesh.Element;

    I = varargin{1};
    keepList = setdiff(1:Mesh.NElem,I);
    f = f(keepList);
    Mesh.NElem = numel(f);

    %[Node0,Element0] = Rebuild(Mesh,v,f,cNode);
    [v, f] = RemoveDuplicates(Mesh, v, f);
    [v, f] = ExtractNode(Mesh, v, f);
    [v, f] = ResequenceNodes(Mesh,v,f);
    [Pc,A] = computeCentroid(Mesh,f,v); 

    Mesh.Center  = Pc;
    Mesh.Node    = v;
    Mesh.Element = f;
    Mesh.NNode   = length(v);
    Mesh.NElem   = length(f);
    Mesh.Area    = A;

    Mesh = ElementAdjecency(Mesh);
    Mesh.ElemNDof = Mesh.Dim * cellfun(@length, f);
    Mesh.geometry.BndMat = ConstructBounds(Mesh);
end