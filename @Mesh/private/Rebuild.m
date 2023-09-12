function [Node,Element] = Rebuild(Mesh,Node0,Element0,cNode)

Element   = cell(Mesh.NElem,1);
[~,ix,jx] = unique(cNode);

if ~isequal(size(jx),size(cNode)), jx=jx'; end 
if size(Node0,1)>length(ix), ix(end)=max(cNode); end

Node = Node0(ix,:); 

for el=1:size(Element0,1)
  Element{el} = unique(jx(Element0{el}));
  vx = Node(Element{el},1); 
  vy = Node(Element{el},2); 
  nv = length(vx);

  [~,iix] = sort(atan2(vy-sum(vy)/nv,vx-sum(vx)/nv));
  Element{el} = Element{el}(iix);
end

end