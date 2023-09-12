function [Node,Element] = RemoveDuplicates(Mesh,Node0,Element0)
% [~,~,cNode] = uniquetol(Node0,1,'ByRows',true);
[~,~,cNode] = unique(Node0,'rows');
[Node,Element] = Rebuild(Mesh,Node0,Element0(1:Mesh.NElem),cNode');
end