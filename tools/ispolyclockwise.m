% ISPOLYCLOCKWISE - Check if a polygon is clockwise or counterclockwise
%
%   [b, a] = ispolyclockwise(x, y) checks the orientation of a polygon defined by
%   the x and y coordinates. It returns a boolean value b indicating whether the
%   polygon is clockwise (true) or counterclockwise (false), and the contour
%   integral a.

function  [b,a] = ispolyclockwise(x,y)

 % Make polygon closed ( even if it already is) .............
x = [x(:); x(1)];
y = [y(:); y(1)];

 % Calculate contour integral Int -y*dx  (same as Int x*dy).
lx = length(x);
if isfloat(x) && isfloat(y) 
a  = -(x(2:lx)-x(1:lx-1))'*(y(1:lx-1)+y(2:lx))/2;
else % mtimes can not handle ints: return double
a  = -sum((x(2:lx)-x(1:lx-1)).*(y(1:lx-1)+y(2:lx)))/2;
end

b = sign(a)==-1;

end