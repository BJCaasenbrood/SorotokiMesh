% COLLECTCOPLANAR   Collect coplanar triangles and create a polygon.
%
%   Poly = collectCoplanar(Node, Element, Element0) finds the vector span
%   of each triangle defined by the nodes in Node and the elements in
%   Element. It then collects the coplanar triangles and creates a polygon
%   from them. The resulting polygon is returned as Poly.
%
%   Example:
%   Node = [0 0 0; 1 0 0; 0 1 0; 1 1 0; 0.5 0.5 0];
%   Element = [1 2 3; 2 3 4; 1 3 5; 1 2 5; 2 4 5; 3 4 5];
%   Element0 = 1:size(Element, 1);
%   Poly = collectCoplanar(Node, Element, Element0);

function Poly = collectCoplanar(Node,Element,Element0)
%finding the vector span of triangle
N = zeros(length(Element),3);
for i = 1:length(Element)
    v1 = Node(Element(i,2),:) - Node(Element(i,1),:);
    v2 = Node(Element(i,3),:) - Node(Element(i,1),:);   
    tmp = cross(v1,v2); N(i,:) = tmp/sqrt(tmp(1)^2 + tmp(2)^2 + tmp(3)^2);
end

[Norm,Ia] = uniquetol(N,1e-1,'ByRows',true,'OutputAllIndices', true);
Nc = transpose(num2cell(Norm.',1));

Rprj = cellfun(@(E) PlanarProjection(E),Nc,'UniformOutput',false); 
NodeId = cellfun(@(E) unique(Element(E,:)),Ia,'UniformOutput',false); 

Prj = cellfun(@(E,R)  R*transpose(Node(E,:)),NodeId,Rprj,'UniformOutput',false);
Stitch = @(E) convhull(transpose(E(1:2,:)));

Poly = cellfun(@(E) Stitch(E),Prj,'UniformOutput',false);
Poly = cellfun(@(E,V) reshape(E(V),1,[]), NodeId, Poly,'UniformOutput',false);
Poly = cellfun(@(E) Element0(E(:)), Poly,'UniformOutput',false);

Poly = nanpadding(Poly);
Poly = vertcat(Poly{:}); 
end

function R = PlanarProjection(a)
a = a(:); b = [0;0;1];
v = cross(a,b); vs = [0,-v(3),v(2);v(3),0,-v(1);-v(2),v(1),0];
R = eye(3,3) + vs + vs*vs/(1+abs(dot(a,b))+1e-9);
end