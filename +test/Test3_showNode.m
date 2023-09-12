% 09-Apr-2023 16:17:09
% Auto-generated test script

% Initialize the test suite
% Add test cases here

f1 = sCircle;
f2 = sCircle(0.5);
sdf1 = f1-f2;

msh = Mesh(sdf1);
msh = msh.generate('NElem',30);

msh.show();

msh.show('Node',1:10);
msh.show('Element',1:10);
msh.show('Holes',1);