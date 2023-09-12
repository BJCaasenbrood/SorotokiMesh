function [Node,Element] = HexahedronOrder(Mesh,Node0,Element0)
    Element = cell(Mesh.NElem,1);
    Node = Node0;
    
    for i = 1:Mesh.NElem
        v = Node0(Element0{i},:);
        s = C3H8Order(v);
        Element{i} = Element0{i}(s);
    end