function Mesh = rebuild(Mesh)

f = Mesh.Element;
v = Mesh.Node;

Mesh.NElem = numel(Mesh.Element);

f = f(1:Mesh.NElem);

[v, f] = RemoveDuplicates(Mesh, v, f);
[v, f] = ExtractNode(Mesh, v, f);

if Mesh.Dim < 3
    [v, f] = CollapseEdges(Mesh, v, f);
    [v, f] = ResequenceNodes(Mesh, v, f);
end

if strcmp(Mesh.Type, 'C3H8')
    [v, f] = HexahedronOrder(Mesh, v, f);
end

[Pc, A] = computeCentroid(Mesh, f, v);

Mesh.Center = Pc;
Mesh.Node = v;
Mesh.Element = f;
Mesh.NNode = length(v);
Mesh.NElem = length(f);
Mesh.Area = A;
Mesh.BdBox = boxhull(v);

switch (Mesh.Type)
    case ('C2PX'), Mesh.ShapeFnc = tabulateshapefunctions(f);
    case ('C2T3'), Mesh.ShapeFnc = tabulateshapefunctions(f);
    case ('C2Q4'), Mesh.ShapeFnc = tabulateshapefunctions(f);
        %case('C3T3'), tab = TabulateShapeFunctions(tab);
    case ('C3H8'), tab = TabulateShapeFunctionsC3H8(tab);
    case ('C3T4'), tab = TabulateShapeFunctionsC3T4(tab);
    otherwise , Mesh.ShapeFnc = tabulateshapefunctions(f);
end

Mesh.ElemNDof = Mesh.Dim * cellfun(@length, f);
Mesh = ElementAdjecency(Mesh);

if Mesh.Dim < 3
    Mesh.geometry.BndMat = ConstructBounds(Mesh);
end

end