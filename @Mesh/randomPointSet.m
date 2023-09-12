function P = randomPointSet(Mesh)
P = zeros(Mesh.NElem,Mesh.Dim);
B = Mesh.BdBox;
Ctr = 0;

while(Ctr < Mesh.NElem)
    Y = zeros(Mesh.NElem,Mesh.Dim);
    for ii = 1:Mesh.Dim
        Y(:,ii) = (B(2*ii)-B(2*ii-1))*rand(Mesh.NElem,1)+B(2*ii-1);
    end
    d = Mesh.Sdf.eval(Y);
    I = find(d(:,end)<0);               
    NumAdded = min(Mesh.NElem-Ctr,length(I));
    P(Ctr+1:Ctr+NumAdded,:) = Y(I(1:NumAdded),:);
    Ctr = Ctr+NumAdded;
end

end 