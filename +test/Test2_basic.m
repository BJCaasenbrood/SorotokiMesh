% 09-Apr-2023 16:17:09
% Auto-generated test script

% Initialize the test suite
% Add test cases here
clf;
f1 = @(x) sqrt(x(:,1).^2 + x(:,2).^2) - 1.0;

B = [-2,2,-2,2];
sdf1 = Sdf(f1,'BdBox',B);

msh = Mesh(sdf1);
msh = msh.generate('NElem',120);

msh.show();
