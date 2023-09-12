function Mesh = CheckConvergence(Mesh)
    Criteria = (Mesh.solver.Residual > Mesh.solver.AbsTolerance);
    
    if (Criteria && (Mesh.solver.Iteration < Mesh.solver.MaxIteration)) 
        Mesh.solver.Flag = 0;
    else
        if (Mesh.solver.Iteration > Mesh.solver.MaxIteration)
            Mesh.solver.Flag = 2; 
        elseif (Mesh.solver.Iteration == 1)
            Mesh.solver.Flag = 0;        
        elseif strcmp(Mesh.Type,'C3H8')
            Mesh.solver.Flag = 2;        
        else
            Mesh.solver.Flag = 1;
        end
    end
end