function [ElemMat,RawConnect,id] = GenerateElementalMatrix(Mesh)
    El = Mesh.Element(1:Mesh.NElem)';   
    if Mesh.Dim == 3
    nodeset = cellfun(@(X) Mesh.Node(X,:),Mesh.Element,'UniformOutput',false);
    faceEl  = cellfun(@(X) convhulln(X,{'Qt','Pp'}),nodeset,'UniformOutput',false);
    faceDis = cellfun(@(V,F,E) collectCoplanar(V,F,E),...
               nodeset,faceEl,Mesh.Element,'UniformOutput',false);
    IdEl = cellfun(@(X,Y) Y*ones(size(X,1),1),faceDis,...
            num2cell(1:Mesh.NElem,1).','UniformOutput',false);       
    face = num2cell(vertcat(faceDis{:}),2);
    id = vertcat(IdEl{:});
    El = face(:)'; 
    R = cell(Mesh.NElem,1);
    for ii = 1:length(id)
        R{id(ii)} = [R{id(ii)},face{id(ii)}]; 
    end
    Raw = R(:); 
    Raw = reshape(Raw,[],1); MaxN = max(cellfun(@(E) size(E,2),Raw));        
    PadWNaN = @(E) [E, NaN(size(E,1), MaxN- size(E,2))]; 
    RawConnect = cellfun(PadWNaN,Raw,'UniformOutput',false);
    RawConnect = vertcat(RawConnect{:});   
    end
    
    if Mesh.Dim < 3, RawConnect = []; id = []; end
    
    El = reshape(El,[],1); MaxN = max(cellfun(@(E) size(E,2),El));        
    PadWNaN = @(E) [E, NaN(size(E,1), MaxN- size(E,2))]; 
    ElemMat = cellfun(PadWNaN,El,'UniformOutput',false);
    ElemMat = vertcat(ElemMat{:});       
    end