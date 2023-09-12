function [Node,Element] = GenerateMeshImage(Mesh,Image)
    
    B = Mesh.BdBox;
    Xscale = (B(2)-B(1))/size(Image,2);
    Yscale = (B(4)-B(3))/size(Image,1);
    
    simplify_tol = Mesh.options.SimplificationTolerance;
    
    img = Image <= 240;
    img = fliplr(img.');
    
    bnd = bwboundaries(img);
    
    c_cell0 = {};
    c_cell = {};
    figure(101);
    
    for ii=1:length(bnd)
        bnd_tmp = bnd{ii};
        assert(all(bnd_tmp(1,:)==bnd_tmp(end,:)), 'contour is not closed');
        c_cell0{ii} = bnd_tmp;
    end
    
    for ii=1:length(c_cell0)
        c_tmp = c_cell0{ii};
        c_red = decimatepolygon(c_tmp,[simplify_tol, 2],false);
        if (nnz(c_red(:,1))>0)&&(nnz(c_red(:,2))>0)
            c_cell{end+1,1} = [Xscale*c_red(:,1), (Yscale)*c_red(:,2)];
        end
    end
    
    if isempty(Mesh.options.Hmin) || isempty(Mesh.options.Hmax)
        AreaBd = (B(2)-B(1))*(B(4)-B(3));
        Mesh.options.Hmin = sqrt(AreaBd/Mesh.NElem);
        Mesh.options.Hmax = 1.5*sqrt(AreaBd/Mesh.NElem);
        
    end

    Tesselation = triangulationcreate(c_cell, 1, Mesh.options.Hmin,         ...
        Mesh.options.Hmax, Mesh.options.ElementOrder);
    
    Node    = Tesselation.Nodes.';    
    Element = Tesselation.Elements.';
    Node(:,1) = Node(:,1) + B(1);
    Node(:,2) = Node(:,2) + B(3);
    
end