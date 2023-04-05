clr;
%% TEST
f1 = @(x) sqrt(x(:,1).^2 + x(:,2).^2) - 1.0;

B = [-2,2,-2,2];
sdf1 = Sdf(f1,'BdBox',B);

msh = Mesh(sdf1);
msh = msh.generate('NElem',200);

msh.show();

%%
F = [1,2,3,4];
V = [0,0;5,0;5,5;0,5];
msh1 = Mesh(V,F);
msh1 = msh1.generate();

msh1.show();
