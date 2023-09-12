function [Vx,Vy,Vn,Vz] = invmeshfield(Mesh,U)
    
if isa(Mesh,'Fem')
    Mesh = Mesh.Mesh;
end

Vx = zeros(Mesh.NNode,1);
Vy = zeros(Mesh.NNode,1);
Vz = zeros(Mesh.NNode,1);
Vn = zeros(Mesh.NNode,1);

for node = 1:Mesh.NNode
    Vx(node) = U(Mesh.Dim*node - (Mesh.Dim-1),1);
    Vy(node) = U(Mesh.Dim*node - (Mesh.Dim-2),1);

    if Mesh.Dim == 3
        Vz(node) = U(Mesh.Dim*node - (Mesh.Dim-3),1);
    end
    
    Vn(node) = sqrt(Vx(node)^2 + Vy(node)^2 + Vz(node)^2);
end

end