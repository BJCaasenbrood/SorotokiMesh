function [Node,Element] = GenerateMeshSTL(Mesh,name)
    
    model = createpde(3);
    importGeometry(model,name);
    msh = generateMesh(model,'GeometricOrder','linear',...
          'Hgrad', 1, 'Hmin', Mesh.options.Hmin, 'Hmax', Mesh.options.Hmax);
     Node    = msh.Nodes';
     Element = msh.Elements';
 
 end