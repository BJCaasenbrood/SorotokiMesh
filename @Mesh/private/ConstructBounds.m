function BndList = ConstructBounds(Mesh)
    
    Bnd = Mesh.geometry.Boundary;
    ID = 1:length(Bnd);
    ii = 1;
    
    while ~isempty(Bnd)
        
        b0 = Bnd(1,:);
        Bnd(1,:) = [];
        ID(1) = [];
        
        X = max(b0);
        BndList{ii} = b0(:);
        idx = find(Bnd(:,1) == X | Bnd(:,2) == X,1);

    while ~isempty(idx)
               
        if Bnd(idx,1) == X
            X = Bnd(idx,2);
            BndList{ii} = [BndList{ii}; Mesh.geometry.Boundary(ID(idx),:).'];
        else
            X = Bnd(idx,1);
            BndList{ii} = [BndList{ii}; flipud(Mesh.geometry.Boundary(ID(idx),:).')];
        end
        
        Bnd(idx,:) = [];
        ID(idx) = [];
        
        idx = find(Bnd(:,1) == X | Bnd(:,2) == X,1);
    end
        BndList{ii} = [BndList{ii}(1:2:end-1), BndList{ii}(2:2:end)];
        ii = ii + 1;
    end
    
    % making sure loops are clockwise
    for ii = 1:length(BndList)
       Elem = unique(BndList{ii}(:),'stable');
       V = Mesh.Node(Elem,:);
             
       if ~ispolyclockwise(V(:,1),V(:,2))
           BndList{ii} = rot90(BndList{ii},2); 
       end
           
    end
end