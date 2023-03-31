clr;
%% TEST

f1 = @(x) sqrt(x(:,1).^2 + x(:,2).^2) - 1.0;
f2 = @(x) sqrt((x(:,1)-1).^2 + x(:,2).^2) - 1.0;

B = [-2,2,-2,2];
sdf1 = Sdf(f1,'BdBox',B);
sdf2 = Sdf(f2,'BdBox',B);

msh = Mesh(sdf1);
msh = msh.generate();

msh.show();