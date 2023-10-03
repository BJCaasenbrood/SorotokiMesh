%POLYGRID Generate a grid of points within a polygon.
%
% [X,Y] = POLYGRID(NUM_POINTS, POLY_ORDER) generates a grid of points
% within a polygon. The polygon is defined by the unit circle centered at
% the origin. The number of points in the grid is specified by NUM_POINTS,
% and the order of the polygon is specified by POLY_ORDER.
%
% Example:
% num_points = 100;
% poly_order = 5;
% [X,Y] = polygrid(num_points, poly_order);
%
% See also MESHGRID, INPOLYGON

function [X,Y] = polygrid(num_points, poly_order)

% Create the unit polygon
theta = linspace(0, 2*pi, poly_order+1);
x = cos(theta);
y = sin(theta);

% Generate the grid of points
[X,Y] = meshgrid(linspace(-1,1,num_points),linspace(-1,1,num_points));
mask = inpolygon(X(:),Y(:),x,y);
X = X(mask);
Y = Y(mask);
end