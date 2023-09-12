function [e,n] = EdgeMatrix(Mesh,face)
    q = Mesh.NElem;
    n = numel(face);
    v = 1:n;
    e = [v(:),[v(2:end)';v(1)]];
end