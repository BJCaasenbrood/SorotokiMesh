function Mesh = ElementAdjecency(Mesh)
    if Mesh.Dim == 2
        face = Mesh.Element;
    elseif Mesh.Dim == 3
        nodeset = cellfun(@(X) Mesh.Node(X,:),Mesh.Element,'UniformOutput',false);
        if ~strcmp(Mesh.Type,'C3T3')
            faceEl = cellfun(@(X) convhulln(X,{'Qt','Pp'}),nodeset,...
                'UniformOutput',false);
        else
            faceEl = Mesh.Element;
        end
        face = num2cell(vertcat(faceEl{:}),2);
    end
    
    edges = cellfun(@numel,face);
    n = Mesh.NElem;    
    p = Mesh.NNode;
    MaxNVer = max(cellfun(@numel,face));     
    
    if Mesh.Dim < 3
        tri = GenerateElementalMatrix(Mesh);
        Mesh.geometry.ElemMat = tri;
    else
        
        if ~strcmp(Mesh.Type,'C3T3')
           [A0,~,~] = GenerateElementalMatrix(Mesh);
        else
           A0 = vertcat(Mesh.Element{:});
        end
        
        Mesh.geometry.ElemMat = A0;
        A   = vertcat(Mesh.Element{:});
        tri = vertcat(Mesh.Element{:});
        triID = (1:Mesh.NElem).';
        MaxNVer = max(cellfun(@numel,num2cell(tri,2)));
        edges = cellfun(@numel,num2cell(tri,2));
        Mesh.geometry.ElementToFace = sparse(1:length(A),triID,1);
    end
    
    set = 1:n;
    
    %if Mesh.Dim == 2
    %tri = vertcat(Mesh.Element{:});
    maxver = num2cell(1:size(tri,2));
    fnc = @(x) sum(tri(:,x)>=1);
    countsperrow = cellfun(@(x) fnc(x), maxver);
    
    idx = 0;
    I = zeros(sum(countsperrow),1);
    J = zeros(sum(countsperrow),1);
    
    for ii = 1:MaxNVer
       id = ~isnan(tri(:,ii));
       i = set(id)';
       j = tri(id,ii);
       I(idx+1:idx+countsperrow(ii)) = i;
       J(idx+1:idx+countsperrow(ii)) = j;
       idx = idx + countsperrow(ii);
    end
    
    M = sparse(I,J,1,n,p);
    C = M*M' - diag(diag(M*M'));
    EdgeMat = zeros(sum(edges),2);
    idx = 0;
    
    for ii = 1:Mesh.NElem
        [tmp,N]= EdgeMatrix(Mesh,face{ii});
        EdgeMat(idx+1:N+idx,:) = [face{ii}(tmp(:,1))',...
                                  face{ii}(tmp(:,2))'];
        idx = idx + N;
    end
    
    E = sort(EdgeMat')';
    [u,~,n] = unique(E,'rows');
    counts  = accumarray(n(:), 1);
    B = u(counts==1,:);
    
    Mesh.geometry.Adjecency  = sparse(double(C>1));
    Mesh.geometry.NodeToFace = (M./sum(M,1))';
    Mesh.geometry.FaceToNode = ((M')./sum(M,2)')';
    Mesh.geometry.Boundary   = B;
    
    end