%------------------------------------------------------- extract nodal data
function [Node,Element] = ExtractNode(Mesh,Node0,Element0)
    map = unique([Element0{1:Mesh.NElem}]);
    cNode = 1:size(Node0,1);
    tmp = setdiff(cNode,map);
    cNode(tmp) = max(map);
    
    [Node,Element] = Rebuild(Mesh,Node0,Element0(1:Mesh.NElem),cNode);
    end