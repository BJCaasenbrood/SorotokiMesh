%QUADPOINTS Generate a grid of points within a specified bounding box.

% Pc = QUADPOINTS(BdBox, Nx, Ny) generates a grid of points within a
% specified bounding box. The bounding box is defined by BdBox, which is
% a 1x4 vector containing the coordinates [B1, B2, B3, B4] of the bottom
% left and top right corners of the box. The number of points in the x
% and y directions are specified by Nx and Ny, respectively.

% Example:
% BdBox = [0, 1, 0, 1];
% Nx = 10;
% Ny = 5;
% Pc = quadpoints(BdBox, Nx, Ny);

% See also MESHGRID, STEPSPACE

function Pc = quadpoints(BdBox,Nx,Ny)
if nargin < 3, Ny = Nx;
else, Nx = Nx^2; Ny = Ny^2;
end

Nx = ceil(sqrt(Nx));
Ny = ceil(sqrt(Ny));

B1 = BdBox(1); B2 = BdBox(2);
B3 = BdBox(3); B4 = BdBox(4);

DBx = (B2-B1)/Nx; DBy = (B4-B3)/Ny;
x = stepspace(B1+DBx/2,DBx,Nx);
y = stepspace(B3+DBy/2,DBy,Ny);

[X,Y] = meshgrid(x,y);

Pc = [X(:),Y(:)];
end