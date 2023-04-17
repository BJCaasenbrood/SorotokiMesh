% 09-Apr-2023 16:17:45
% Auto-generated test script

% Initialize the test suite
% Add test cases here

clf;
F = [1,2,3,4];
V = [0,0;5,0;5,5;0,5];
msh1 = Mesh(V,F);
msh1 = msh1.generate();

msh1.show();

