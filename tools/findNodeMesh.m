% FINDNODEMESH - Find nodes in a mesh based on specified criteria
%
%   x = findNodeMesh(Node, Request, varargin) finds nodes in a mesh based on the
%   specified request.
%
%   Inputs:
%       - Node: The node information of the mesh.
%       - Request: A string specifying the type of request. Available options are:
%           - 'sw': Find nodes in the southwest region of the bounding box.
%           - 'se': Find nodes in the southeast region of the bounding box.
%           - 'nw': Find nodes in the northwest region of the bounding box.
%           - 'ne': Find nodes in the northeast region of the bounding box.
%           - 'top': Find nodes in the top region of the bounding box.
%           - 'bottom': Find nodes in the bottom region of the bounding box.
%           - 'left': Find nodes in the left region of the bounding box.
%           - 'right': Find nodes in the right region of the bounding box.
%           - 'front': Find nodes in the front region of the bounding box.
%           - 'back': Find nodes in the back region of the bounding box.
%           - 'middle': Find nodes in the middle region of the bounding box.
%           - 'topmid': Find nodes in the top middle region of the bounding box.
%           - 'bottommid': Find nodes in the bottom middle region of the bounding box.
%           - 'leftmid': Find nodes in the left middle region of the bounding box.
%           - 'rightmid': Find nodes in the right middle region of the bounding box.
%           - 'tophalf': Find nodes in the top half region of the bounding box.
%           - 'bothalf': Find nodes in the bottom half region of the bounding box.
%           - 'location': Find nodes based on specified location criteria.
%           - 'sdfe': Find nodes based on signed distance function to an edge.
%           - 'sdf': Find nodes based on signed distance function to a surface.
%           - 'line': Find nodes along a line segment.
%           - 'box': Find nodes within a specified box region.
%           - 'floodfill': Find nodes using flood fill algorithm.
%       - varargin: Additional input arguments depending on the request.
%
%   Outputs:
%       - x: The output based on the specified request.
%
%   Example:
%       x = findNodeMesh(Node, 'sw');

function x = findNodeMesh(Node,varargin)

BdBox = boxhull(Node);
if size(Node,2) == 2
    tol = 0.1*sqrt((BdBox(2)-BdBox(1))*(BdBox(4)-BdBox(3))/size(Node,1)); 
else
    tol = 0.3*sqrt((BdBox(2)-BdBox(1))*(BdBox(4)-BdBox(3))/size(Node,1));
end

Request = lower(varargin{1}); 

switch(Request)
    case('sw');         x = SouthWest(Node,BdBox,tol);
    case('se');         x = SouthEast(Node,BdBox,tol);
    case('nw');         x = NorthWest(Node,BdBox,tol);
    case('ne');         x = NorthEast(Node,BdBox,tol);
    case('top');        x = Top(Node,BdBox,tol);
    case('bottom');     x = Bottom(Node,BdBox,tol);
    case('left');       x = Left(Node,BdBox,tol);
    case('right');      x = Right(Node,BdBox,tol);
    case('front');      x = Front(Node,BdBox,tol);
    case('back');       x = Back(Node,BdBox,tol);
    case('middle');     x = Middle(Node,BdBox,varargin{end});
    case('topmid');     x = TopMid(Node,BdBox);
    case('bottommid');  x = BottomMid(Node,BdBox);
    case('leftmid');    x = LeftMid(Node,BdBox,varargin{end});
    case('rightmid');   x = RightMid(Node,BdBox);
    case('tophalf');    x = TopHalf(Node,BdBox,tol);
    case('bothalf');    x = BotHalf(Node,BdBox,tol);
    case('location');   x = Location(Node,BdBox,varargin{2:end});
    case('sdfe');       x = SignedFunctionEdge(Node,varargin{2:end},tol);
    case('sdf');        x = SignedFunction(Node,varargin{2:end},tol);
    case('line');       x = Line(Node,varargin{2:end},tol);
    case('box');        x = BoxSelect(Node,varargin{2:end},tol);
    case('floodfill');  x = FloodFill(Node,varargin{2:end});
end

end

function id = SignedFunctionEdge(Node,SDF,tol)
if isa(SDF,'Sdf')
    d = SDF.eval.(Node); 
else
    d = SDF(Node);
end
d = d(:,end);
id = find( abs(d) < tol );
end


function id = SignedFunction(Node,SDF,tol)
if isa(SDF,'Sdf')
    d = SDF.eval(Node); 
else
    d = SDF(Node);
end
d = d(:,end);
id = find( d < tol );
end

function id = SouthEast(Node,BdBox,tol)
id = find(abs(Node(:,1)-BdBox(2)) < tol & abs(Node(:,2)-BdBox(3)) < tol );
end

function id = SouthWest(Node,BdBox,tol)
id = find(abs(Node(:,1)-BdBox(1)) < tol & abs(Node(:,2)-BdBox(3)) < tol );
end

function id = NorthWest(Node,BdBox,tol)
id = find(abs(Node(:,1)-BdBox(1)) < tol & abs(Node(:,2)-BdBox(4)) < tol );
end

function id = NorthEast(Node,BdBox,tol)
id = find(abs(Node(:,1)-BdBox(2)) < tol & abs(Node(:,2)-BdBox(4)) < tol );
end

function id = Top(Node,BdBox,tol)
if length(BdBox) == 4, id = find(abs(Node(:,2) - BdBox(4))<tol);
else, id = find(abs(Node(:,3) - BdBox(6))<tol);
end
end

function id = Bottom(Node,BdBox,tol)
if length(BdBox) == 4, id = find(abs(Node(:,2) - BdBox(3))<tol );
else, id = find(abs(Node(:,3) - BdBox(5))<tol);
end
% [~,I] = sort(Node(id,1));
% id = id(I);
end

function id = Left(Node,BdBox,tol)
id = find(abs(Node(:,1) - BdBox(1))<tol);
end

function id = Right(Node,BdBox,tol)
id = find(abs(Node(:,1) - BdBox(2))<tol);
end

function id = Front(Node,BdBox,tol)
id = find(abs(Node(:,2) - BdBox(3))<tol);
end

function id = Back(Node,BdBox,tol)
id = find(abs(Node(:,2) - BdBox(4))<tol);
end

function id = TopHalf(Node,BdBox,tol)
id = find(Node(:,2) - ((BdBox(4)+BdBox(3))/2 + BdBox(3))>tol);
end

function id = BotHalf(Node,BdBox,tol)
id = find(Node(:,2) - ((BdBox(4)+BdBox(3))/2 + BdBox(3))<tol);
end

function id = Middle(Node,BdBox,N)
Mid = sqrt((Node(:,1)-(BdBox(1)+BdBox(2))*0.5).^2+...
    (Node(:,2)-(BdBox(3)+BdBox(4))*0.5).^2);
[~,Mid] = sort(Mid); id = Mid(1:N);
end

function id = RightMid(Node,BdBox)
Mid = sqrt((Node(:,1)-BdBox(2)).^2+...
    (Node(:,2)-(BdBox(3)+BdBox(4))*0.5).^2);
[~,Mid] = sort(Mid); id = Mid(1);
end

function id = LeftMid(Node,BdBox,N)
if nargin < 3 || ischar(N), N = 1; end
Mid = sqrt((Node(:,1)-BdBox(1)).^2+...
    (Node(:,2)-(BdBox(3)+BdBox(4))*0.5).^2);
[~,Mid] = sort(Mid); id = Mid(1:N);
end

function id = TopMid(Node,BdBox,N)
if nargin < 3, N = 1; end
Mid = sqrt((Node(:,1)-(BdBox(1)+BdBox(2))*0.5).^2+...
    (Node(:,2)-BdBox(4)).^2);
[~,Mid] = sort(Mid); id = Mid(1:N);
end

function id = BottomMid(Node,BdBox,N)
if nargin < 3, N = 1; end
Mid = sqrt((Node(:,1)-(BdBox(1)+BdBox(2))*0.5).^2+...
    (Node(:,2)-BdBox(3)).^2);
[~,Mid] = sort(Mid); id = Mid(1:N);
end

% function eps = BuildTolerance(Node)
% BdBox = boxhull(Node);
% eps = 0.1*sqrt((BdBox(2)-BdBox(1))*(BdBox(4)-BdBox(3))/size(Node,1));
% end

function id = Location(Node,BdBox,Node0,N)
if nargin < 4, N = 1; end
if length(BdBox) == 4
    Loc = sqrt((Node(:,1)-Node0(1)).^2+(Node(:,2)-Node0(2)).^2);
elseif length(BdBox) == 6
    Loc = sqrt((Node(:,1)-Node0(1)).^2+ ...
        (Node(:,2)-Node0(2)).^2 + (Node(:,3)-Node0(3)).^2);
end

[~,Loc] = sort(Loc); id = Loc(1:N);
end

function id = Line(Node,Line,tol)
d  = dLine(Node,Line(1)-eps,Line(2)+eps,Line(3)-eps,Line(4)+eps);
id = find(abs(d(:,end))<tol);
end

function id = BoxSelect(Node,Line,tol)
if numel(Line) == 4
    d = dRectangle(Node,Line(1)-eps,Line(2)+eps,Line(3)-eps,Line(4)+eps);
else
    d = dCube(Node,Line(1)-eps,Line(2)+eps,Line(3)-eps,Line(4)+eps,...
        Line(5)-eps,Line(6)+eps);
end
id = find(d(:,end)<tol);
end


function id = FloodFill(Node,Fem,rho)

m = Fem.Mesh.get('Adjecency');

blclist = find(rho>Fem.get('VoidTolerance'));
m(blclist,:) = 0;
m(:,blclist) = 0;

v0 = Fem.get('PressureCell');

x = FloodFillOne(m,v0(1));
id = 1:length(Node);
id = id(logical(x));

end

function list = FloodFillOne(m,v0)

[n,~]=size(m);
L = 1:n;
list=zeros(n,1);
list(v0)=1;
%neigh=m(:,v0).*(~list);
neigh=(m(:,v0) & ~list);
stack = find(neigh);

while(~isempty(stack))
    v0 = stack(end);
    stack(end) = [];
    list(v0)=1;
    %neigh= m(:,v0).*(~list);
    neigh= (m(:,v0) & ~list);
    stack = sort([stack; find(neigh)]); 
    stack = stack(diff(stack(:))>0);
end

end

function BdBox = BoundingBox(Node)
if size(Node,2) == 2
    BdBox = zeros(4,1);
    BdBox(1) = min(Node(:,1));
    BdBox(2) = max(Node(:,1));
    BdBox(3) = min(Node(:,2));
    BdBox(4) = max(Node(:,2));
else
    BdBox = zeros(6,1);
    BdBox(1) = min(Node(:,1));
    BdBox(2) = max(Node(:,1));
    BdBox(3) = min(Node(:,2));
    BdBox(4) = max(Node(:,2));
    BdBox(5) = min(Node(:,3));
    BdBox(6) = max(Node(:,3));
end
end

