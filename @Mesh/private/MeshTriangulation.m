function [v, f] = MeshTriangulation(~,Center,v0,f0,Nel,Nvr)
    f = [];
    
    for ii = 1:Nel
        el = f0{ii};
        n = numel(el);
        elem = [el(1:n)', [el(2:n)'; el(1)], ...
                repmat(Nvr+ii,n,1)];
        f = [f; elem];
    end
    
    f = num2cell(f,2);
    v = [v0;Center];
    end