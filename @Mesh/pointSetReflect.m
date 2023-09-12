function Rp = pointSetReflect(Mesh,P,A)
Alpha = 3*(A/Mesh.NElem)^(1/2);
d = Mesh.Sdf.eval(P);  

% number of assigned boundary segments
NBdrySegs = (size(d,2)-1);   
eps = 1e-6;%Mesh.solver.StepTolerance;

if Mesh.Dim == 2
    n1 = (Mesh.Sdf.eval(P+repmat([eps,0],Mesh.NElem,1))-d)/eps;
    n2 = (Mesh.Sdf.eval(P+repmat([0,eps],Mesh.NElem,1))-d)/eps;
else
    n1 = (Mesh.Sdf.eval(P+repmat([eps,0,0],Mesh.NElem,1))-d)/eps;
    n2 = (Mesh.Sdf.eval(P+repmat([0,eps,0],Mesh.NElem,1))-d)/eps;
    n3 = (Mesh.Sdf.eval(P+repmat([0,0,eps],Mesh.NElem,1))-d)/eps;
end

% logical index of seeds near the boundary
%I       = abs(d(:,1:NBdrySegs))<Alpha; 
I       = abs(d(:,1:NBdrySegs))<Alpha; 
P1      = repmat(P(:,1),1,NBdrySegs); 
P2      = repmat(P(:,2),1,NBdrySegs); 
Rp(:,1) = P1(I)-2*n1(I).*d(I);  
Rp(:,2) = P2(I)-2*n2(I).*d(I);

if Mesh.Dim == 3
    P3 = repmat(P(:,3),1,NBdrySegs); 
    Rp(:,3) = P3(I)-2*n3(I).*d(I);  
end

d_R_P = Mesh.Sdf.eval(Rp);
if Mesh.NElem > 1 % temporary fix
    J  = abs(d_R_P(:,end))>=Mesh.options.Eta*abs(d(I))                      ...
        & d_R_P(:,end)>0;
    Rp = Rp(J,:); 
end

Rp = unique(Rp,'rows');
end