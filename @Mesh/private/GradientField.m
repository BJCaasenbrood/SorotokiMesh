function RGB = GradientField(Mesh,P)
    d = Mesh.SDF(P);  
    N = length(P);
    n1 = (Mesh.SDF(P+repmat([Mesh.eps,0],N,1))-d)/Mesh.eps;
    n2 = (Mesh.SDF(P+repmat([0,Mesh.eps],N,1))-d)/Mesh.eps; 
    
    RGB = atan2(n2(:,end),n1(:,end));
end