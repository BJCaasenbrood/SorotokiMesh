function Mesh = ComputeCotanLaplacian(Mesh)

    if Mesh.Dim == 2
        V = [Mesh.Node.';zeros(1,Mesh.NNode)];
    else
        V = Mesh.Node.';
    end
    
    F = vertcat(Mesh.Element{:,1}).';
    W = sparse(Mesh.NNode,Mesh.NNode);
    
    for i = 1:3
        
       i1 = mod(i-1,3)+1;
       i2 = mod(i  ,3)+1;
       i3 = mod(i+1,3)+1;
       pp = V(:,F(i2,:)) - V(:,F(i1,:));
       qq = V(:,F(i3,:)) - V(:,F(i1,:));
       
       % normalize the vectors
       pp = pp ./ repmat( sqrt(sum(pp.^2,1)), [3 1] );
       qq = qq ./ repmat( sqrt(sum(qq.^2,1)), [3 1] );
       % compute angles
       ang = acos(sum(pp.*qq,1));
       u = cot(ang);
       u = clamp(u, 0.01,100);
       W = W + sparse(F(i2,:),F(i3,:),u,Mesh.NNode,Mesh.NNode);
       W = W + sparse(F(i3,:),F(i2,:),u,Mesh.NNode,Mesh.NNode);
    end
    
    d = full( sum(W,1) );
    %D = spdiags(d(:),0,Mesh.NNode,Mesh.NNode);
    %L = D - W;
    L = speye(Mesh.NNode) - diag(sum(W,2).^(-1/2)) * W * diag(sum(W,2).^(-1/2));
    
    Mesh.Laplacian = L;
    
end