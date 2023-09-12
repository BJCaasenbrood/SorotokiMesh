function [Node0,Element0] = CollapseEdges(Mesh,Node0,Element0)

    while(true)
      cEdge = [];
      for el=1:size(Element0,1)
        %Cannot collapse triangles
        if size(Element0{el},2)<4, continue; end
    
        vx = Node0(Element0{el},1); 
        vy = Node0(Element0{el},2); 
        nv=length(vx);
        beta = atan2(vy-sum(vy)/nv, vx-sum(vx)/nv);
        beta = mod(beta([2:end 1]) -beta,2*pi);
        betaIdeal = 2*pi/size(Element0{el},2);
        Edge = [Element0{el}',Element0{el}([2:end 1])'];
        cEdge = [cEdge; Edge(beta<Mesh.options.CollapseTolerance*betaIdeal,:)];
      end
    
      if (size(cEdge,1)==0)
        break; 
      end
    
      cEdge = unique(sort(cEdge,2),'rows');
      cNode = 1:size(Node0,1);
    
      for i=1:size(cEdge,1)
        cNode(cEdge(i,2)) = cNode(cEdge(i,1));
      end
    
      [Node0,Element0] = Rebuild(Mesh,Node0,Element0,cNode);
    end
    
    end