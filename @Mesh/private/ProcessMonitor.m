function ProcessMonitor(Mesh)
    if Mesh.Iteration == 1
    fprintf(' Iter   | Residual  | Mobility  |\n');
    fprintf('---------------------------------\n');
    end
    fprintf(' %i  \t| %1.3e | %1.3e |\n',...
        Mesh.Iteration,Mesh.Convergence(end),max(Mesh.Velocity));   
end