function Mesh = generate(Mesh, varargin)

    for ii = 1:2:length(varargin)

        if strcmp(varargin{ii}, 'Quads')
            N = num2cell(varargin{ii + 1});
            Mesh.Center = quadpoints(Mesh.BdBox, N{:});
            Mesh.Type = 'C2Q2';
        else

            if isprop(Mesh.options, varargin{ii})
                Mesh.options.(varargin{ii}) = varargin{ii + 1};
            else
                Mesh.(varargin{ii}) = varargin{ii + 1};
            end

        end

    end

    if isempty(Mesh.Center)
        Pc = randomPointSet(Mesh);
    elseif strcmp(Mesh.Type, 'C3H8')
        Pc = Mesh.Center;
        Mesh.NElem = length(Pc);
    elseif strcmp(Mesh.Type, 'C2Q4')
        if ~isempty(Mesh.Center)
            Pc = Mesh.Center;
            Mesh.NElem = size(Pc, 1);
        else
            return;
        end

    elseif ~isempty(Mesh.options.STLFile)
        Mesh.solver.Flag = 1;
    elseif ~isempty(Mesh.options.Image)
        Mesh.solver.MaxIteration = -1;
    else
        Pc = Mesh.Center;
        d = Mesh.Sdf.eval(Pc);
        Pc = Pc(d(:, end) < 0, :);
        Mesh.NElem = length(Pc);
    end

    % a-prioiri area estimate
    if numel(Mesh.BdBox) < 6
        Anew = (Mesh.BdBox(2) - Mesh.BdBox(1)) * ...
               (Mesh.BdBox(4) - Mesh.BdBox(3));
    else
        Anew = (Mesh.BdBox(2) - Mesh.BdBox(1)) * ...
               (Mesh.BdBox(4) - Mesh.BdBox(3)) * ...
               (Mesh.BdBox(6) - Mesh.BdBox(5));
    end

    if Mesh.solver.MaxIteration < 0
        Mesh.solver.Flag = 1;
        f = Mesh.Element;
        v = Mesh.Node;
    else
        Mesh.solver.Flag = 0;
    end

    % initial 
    Mesh.solver.sol.tout = [];
    Mesh.solver.sol.yout = [];

    % loyd's algorithm
    while Mesh.solver.Flag == 0

        % update seeding points
        P = Pc;

        % reflection of seedings
        Rp = pointSetReflect(Mesh, P, Anew);

        % bounding box seedings
        Rb = boundingReflect(Mesh);

        % generate Voronoi tesselation
        [v, f] = voronoin([P; Rp; Rb], {'Qt', 'Pp'});

        % compute centroid and area
        [Pc, A] = computeCentroid(Mesh, f, v);

        Anew = sum(abs(A));

        Mesh.solver.Residual = sqrt(sum((A .^ 2) .* sum((Pc - P) .* (Pc - P), 2))) * ...
            Mesh.NElem / (Anew ^ 1.5);

        Mesh.solver.sol.tout = [Mesh.solver.sol.tout; Mesh.solver.Iteration];
        Mesh.solver.sol.yout = [Mesh.solver.sol.yout; abs(A(:)).'];    

        Mesh = CheckConvergence(Mesh);

        Mesh.solver.Iteration = Mesh.solver.Iteration + 1;

    end

    f = f(1:Mesh.NElem);

    [v, f] = RemoveDuplicates(Mesh, v, f);
    [v, f] = ExtractNode(Mesh, v, f);

    if Mesh.Dim < 3
        [v, f] = CollapseEdges(Mesh, v, f);
        [v, f] = ResequenceNodes(Mesh, v, f);
    end

    if strcmp(Mesh.Type, 'C3H8')
        [v, f] = HexahedronOrder(Mesh, v, f);
    end

    if Mesh.options.Triangulate
        Mesh.Node = v;
        Mesh.Element = f;

        [v, f] = MeshTriangulation(Mesh, P, v, f, length(f), length(v));
        [v, f] = ResequenceNodes(Mesh, v, f);

        Mesh.NElem = length(f);
        Mesh.NNode = length(v);
        Mesh.Node = v;
        Mesh.Element = f;
    end

    [Pc, A] = computeCentroid(Mesh, f, v);

    Mesh.Center = Pc;
    Mesh.Node = v;
    Mesh.Element = f;
    Mesh.NNode = length(v);
    Mesh.NElem = length(f);
    Mesh.Area = A;

    switch (Mesh.Type)
        case ('C2PX'), Mesh.ShapeFnc = tabulateshapefunctions(f);
        case ('C2T3'), Mesh.ShapeFnc = tabulateshapefunctions(f);
        case ('C2Q4'), Mesh.ShapeFnc = tabulateshapefunctions(f);
        case ('C3H8'), Mesh.ShapeFnc = tabulateShapeFunctionsC3H8;
        case ('C3T4'), Mesh.ShapeFnc = tabulateShapeFunctionsC3T4;
        otherwise , Mesh.ShapeFnc = tabulateshapefunctions(f);
    end

    Mesh.ElemNDof = Mesh.Dim * cellfun(@length, f);
    Mesh = ElementAdjecency(Mesh);

    if Mesh.Dim < 3
        Mesh.geometry.BndMat = ConstructBounds(Mesh);
    end

    % if strcmp(Mesh.Type,'C3T3') || strcmp(Mesh.Type,'C2T3')
    %     list  = (1:Mesh.NNode).';
    %     Bnd   = vertcat(Mesh.geometry.BndMat{:});
    %     Pfix  = unique(Bnd(:));
    %     Pfree = setdiff(list,Pfix);
    %     N2F   = Mesh.geometry.NodeToFace;
    %
    %     f = Mesh.Element;
    %     v = Mesh.Node;
    %     dv = v;
    %     dvm = mean(abs(dv(:,1)) + abs(dv(:,2)));
    %
    %     jj = 1;
    %     while dvm >= 1e-3 && jj < 150
    %
    %        [Pc,A] = computeCentroid(Mesh,f,v);
    %        dv = v*0;
    %
    %        for jj = 1:numel(Pfree)
    %            id = Pfree(jj);
    %            Am = diag(N2F(:,id))*A;
    %            dv(id,:) = mean(diag(Am)*((Pc - v(id,:))),1)/(sum(Am)^2);
    %        end
    %
    %        dvm = mean(abs(dv(:,1)) + abs(dv(:,2)));
    %        v(Pfree,:) = v(Pfree,:) + dv(Pfree,:);
    %        jj = jj + 1;
    %     end
    %
    %     Mesh.Node = v;
    % end
end
