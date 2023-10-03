function Mesh = set(Mesh, varargin)
    for ii = 1:2:length(varargin)

        if strcmp(varargin{ii}, 'Quads')
            N = num2cell(varargin{ii + 1});
            Mesh.Center = Quads(Mesh.BdBox, N{:});
            Mesh.Type = 'C2Q2';
        else
            if isprop(Mesh.options,varargin{ii})
                Mesh.options.(varargin{ii}) = varargin{ii+1};
            elseif isprop(Mesh.solver,varargin{ii})
                Mesh.solver.(varargin{ii}) = varargin{ii+1};
            else
                Mesh.(varargin{ii}) = varargin{ii+1};
            end
        end
    end
end