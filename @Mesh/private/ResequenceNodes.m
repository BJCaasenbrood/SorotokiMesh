function [Node,Element] = ResequenceNodes(Mesh,Node0,Element0)
  NNode0=size(Node0,1); NElem0=size(Element0,1);
  ElemLnght = cellfun(@length,Element0);

  nn = sum(ElemLnght.^2);
  i = zeros(nn,1);
  j = zeros(nn,1);
  s = zeros(nn,1);

  index=0;

  for el = 1:NElem0
    eNode=Element0{el}; ElemSet=index+1:index+ElemLnght(el)^2;
    i(ElemSet) = kron(eNode,ones(ElemLnght(el),1))';
    j(ElemSet) = kron(eNode,ones(1,ElemLnght(el)))';
    s(ElemSet) = 1;
    index = index+ElemLnght(el)^2;
  end

  K = sparse(i,j,s,NNode0, NNode0);
  p = symrcm(K);
  cNode(p(1:NNode0))=1:NNode0;
  [Node,Element] = Rebuild(Mesh,Node0,Element0,cNode);
end