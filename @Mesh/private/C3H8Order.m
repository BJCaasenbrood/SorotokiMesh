function s = C3H8Order(points)

    s = 1:8;
    XD = [-1 1 1 -1 -1 1 1 -1; -1 -1 1 1 -1 -1 1 1; -1 -1 -1 -1 1 1 1 1];
    for k = 1:8
        fvs = XD(:,k);
    
        if(fvs(1) == -1), [~,ix] = mink(points(:,1),4);
        else, [~,ix] = maxk(points(:,1),4);
        end
    
        if(fvs(2) == -1), [~,iy] = mink(points(:,2),4);
        else, [~,iy] = maxk(points(:,2),4);
        end
    
        if(fvs(3) == -1), [~,iz] = mink(points(:,3),4);
        else, [~,iz] = maxk(points(:,3),4);
        end
        
        tmp = intersect(intersect(ix,iy),iz);
        s(k) = tmp;
    end
end