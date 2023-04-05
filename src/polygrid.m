function [X,Y] = polygrid(num_points, poly_order)
% GENERATE_GRID Generates a uniform grid of points inside a unit polygon area
%   [X,Y] = GENERATE_GRID(NUM_POINTS,POLY_ORDER) returns the X and Y coordinates 
%   of NUM_POINTS uniformly distributed within a unit polygon of order POLY_ORDER.

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