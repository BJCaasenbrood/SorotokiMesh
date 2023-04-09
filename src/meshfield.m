function [V, Vn] = meshfield(Mesh,U)
    
if isa(Mesh,'Fem')
    Mesh = Mesh.Mesh;
end

V = zeros(Mesh.NNode,Mesh.Dim);

for node = 1:Mesh.NNode
    for ii = 1:Mesh.Dim
        V(node,ii) = U(Mesh.Dim*node - (Mesh.Dim-ii),1);
    end
    Vn(node) = sqrt(sum(V(node,:).^2));
end

end