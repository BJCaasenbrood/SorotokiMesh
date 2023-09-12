function [Pc,A] = computeCentroid(Mesh,f,v)
    
Pc = zeros(Mesh.NElem,Mesh.Dim); 
A  = zeros(Mesh.NElem,1);

if Mesh.Dim == 3
    F = f(1:Mesh.NElem)';
    VCell = cellfun(@(E) v(E,:),F,'UniformOutput',false);
    
    if strcmp(Mesh.Type,'C3H8') || strcmp(Mesh.Type,'C3T4')
        TCell  = cellfun(@(E) convhulln(E,{'Qt','QbB','Pp'}),VCell,...
            'UniformOutput',false);
        [Pc, A] = cellfun(@(V,F) CentroidPolyhedron(Mesh,V,F),VCell,...
            TCell,'UniformOutput',false);
        
        A  = vertcat(A{:});
    else
        [Pc] = cellfun(@(V) mean(V,1),VCell,'UniformOutput',false);
        A = 0;
    end
    
    Pc = vertcat(Pc{:});
    
    return;
end

for el = 1:Mesh.NElem

  vx = v(f{el},1); 
  vy = v(f{el},2); 
  nv = length(f{el}); 
  
  vxS = vx([2:nv 1]); 
  vyS = vy([2:nv 1]); 
   
  tmp = vx.*vyS - vy.*vxS;
  A(el) = 0.5*sum(tmp);
  Pc(el,:) = 1/(6*A(el,1))*[sum((vx+vxS).*tmp),...
                            sum((vy+vyS).*tmp)];
end

end

%-------------------------------------- compute centroid convex poly-hedron
function [Pc,W] = CentroidPolyhedron(~,Node,Element)
    
    %finding the area of closed polyhedron
    v1 = Node(Element(:,2),:) - Node(Element(:,1),:);
    v2 = Node(Element(:,3),:) - Node(Element(:,1),:);
    
    Atmp = 0.5*cross(v1,v2);
    A(:,1) = sqrt(Atmp(:,1).^2+Atmp(:,2).^2+Atmp(:,3).^2);
    
    W = sum(A); %total area
    
    p1 = Node(Element(:,1),:);
    p2 = Node(Element(:,2),:);
    p3 = Node(Element(:,3),:);
    
    Pc = (1/3).*(p1 + p2 + p3); %centroid of each triangle
    
    mg(:,1) = A.*Pc(:,1);
    mg(:,2) = A.*Pc(:,2);
    mg(:,3) = A.*Pc(:,3);
    Mg = [mg(:,1),mg(:,2),mg(:,3)];
    
    Pc = sum(Mg)./W;
end