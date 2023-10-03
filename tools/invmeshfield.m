% INVMESHFIELD - Inverse mapping of field values to mesh nodes
%
%   [Vx, Vy, Vn, Vz] = invmeshfield(Mesh, U) maps the field values U back to the
%   corresponding mesh nodes in the Mesh structure.
%
%   Inputs:
%       - Mesh: The mesh structure containing node information.
%       - U: The field values to be mapped back to the mesh nodes.
%
%   Outputs:
%       - Vx: The x-component of the field values at each mesh node.
%       - Vy: The y-component of the field values at each mesh node.
%       - Vn: The magnitude of the field values at each mesh node.
%       - Vz: The z-component of the field values at each mesh node (if applicable).
%
%   Example:
%       [Vx, Vy, Vn, Vz] = invmeshfield(Mesh, U);

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