%MESHEDGES Compute the edges of a mesh given the face connectivity.
% E = MESHEDGES(F) takes a matrix F, which represents the face connectivity of a mesh,
% and computes the edges of the mesh. The output E is a matrix where each row
% represents an edge of the mesh.
%
% Example:
%   F = [1 2 3; 2 3 4; 1 3 4];
%   E = meshedges(F); % E contains the edges of the mesh
% 

function E = meshedges(F)
  n = size(F,2);

  e = nchoosek(1:n,2);
  A = sparse(F(:,e(:,1)),F(:,e(:,2)),1,max(F(:)),max(F(:)));
  [EI,EJ] = find(tril(A+A'));
  E = [EJ EI];

end

