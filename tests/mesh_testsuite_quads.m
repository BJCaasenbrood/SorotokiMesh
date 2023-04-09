clr;
%% TEST
% f1 = @(x) sqrt(x(:,1).^2 + x(:,2).^2) - 1.0;
% 
% B = [-2,2,-2,2];
% sdf1 = Sdf(f1,'BdBox',B);
% 
% msh = Mesh(sdf1);

sdf = sRectangle(10,10);
msh = Mesh(sdf,'Quads',[10,10]);
%msh = Mesh(sdf,'NElem',300);
msh = msh.generate();

s = sCircle(2,[5,5]);
I = msh.findElements('SDF',s);
msh = msh.removeElements(I);

s = sRectangle(2,8,0,1);
I = msh.findElements('SDF',s);
msh = msh.removeElements(I);

%msh.show();
%msh.show();
%msh.show('Element',I);
 
% %%
% F = [1,2,3,4];
% V = [0,0;5,0;5,5;0,5];
% msh1 = Mesh(V,F);
% msh1 = msh1.generate();
% 
% msh1.show();
fem = Fem(msh);

