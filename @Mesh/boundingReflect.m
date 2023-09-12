function Rb = boundingReflect(Mesh)
    
tmp = Mesh.BdBox; 

a = 0.5;
tmp(1) = Mesh.BdBox(1)-a*( Mesh.BdBox(2) - Mesh.BdBox(1));
tmp(2) = Mesh.BdBox(2)+a*( Mesh.BdBox(2) - Mesh.BdBox(1));
tmp(3) = Mesh.BdBox(3)-a*( Mesh.BdBox(4) - Mesh.BdBox(3));
tmp(4) = Mesh.BdBox(4)+a*( Mesh.BdBox(4) - Mesh.BdBox(3));

if Mesh.Dim == 3
    tmp(5) = Mesh.BdBox(5)-a*( Mesh.BdBox(6) - Mesh.BdBox(5));
    tmp(6) = Mesh.BdBox(6)+a*( Mesh.BdBox(6) - Mesh.BdBox(5));
end

if Mesh.Dim == 2
    x = linspace(tmp(1),tmp(2),2);
    y = linspace(tmp(3),tmp(4),2);
    [X,Y] = meshgrid(x,y);
    Rb = [X(:),Y(:)];
else
    x = linspace(tmp(1),tmp(2),2);
    y = linspace(tmp(3),tmp(4),2);
    z = linspace(tmp(5),tmp(6),2);
    [X,Y,Z] = meshgrid(x,y,z);
    Rb = [X(:),Y(:),Z(:)];
end

end