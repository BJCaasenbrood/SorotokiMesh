% MESHFIELD computes the spatial coordinates and magnitudes of a vector field 
% defined on a mesh.
%
% Usage:
%   [V, Vn] = meshfield(Mesh, U)
%
% Inputs:
%   - Mesh: A struct or object representing a mesh. It should have fields/properties:
%           - NNode: Number of nodes in the mesh.
%           - Dim: Dimensionality of the mesh.
%   - U: A column vector representing the vector field values at each node of the mesh.
%
% Outputs:
%   - V: A matrix of size (NNode x Dim) containing the spatial coordinates of each node.
%   - Vn: A column vector of size (NNode x 1) containing the magnitudes of the vector field at each node.
%
% Examples:
%   % Create a mesh object
%   Mesh.NNode = 100;
%   Mesh.Dim = 2;
%   
%   % Create a vector field with random values
%   U = rand(2*Mesh.NNode, 1);
%   
%   % Compute the spatial coordinates and magnitudes of the vector field
%   [V, Vn] = meshfield(Mesh, U);
%
% Notes:
%   - The input argument `Mesh` can also be an instance of the class `Fem`, in which case it will extract the `Mesh`
%     property from it.
%   - The input argument `U` must have a length equal to `Mesh.Dim * Mesh.NNode`.
%   - The output argument `V` will have a size of `(NNode x Dim)` where `NNode` is the number of nodes in the mesh and
%     `Dim` is the dimensionality of the mesh.
%   - The output argument `Vn` will be a column vector of size `(NNode x 1)` representing the magnitudes of the vector
%     field at each node.
%
% See also: FEM, MESH

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