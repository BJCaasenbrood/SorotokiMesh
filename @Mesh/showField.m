function h = showField(Mesh, Z, varargin)

figure(101);
fs  = 'flat';

if ~isempty(varargin)
    for ii = 1:2:length(varargin)
        if isprop(Mesh.options,varargin{ii})
            Mesh.options.(varargin{ii}) = varargin{ii+1};
        elseif isprop(Mesh.solver,varargin{ii})
            Mesh.solver.(varargin{ii}) = varargin{ii+1};
        else
            Mesh.(varargin{ii}) = varargin{ii+1};
        end
    end
end

% generate elemental matrices for plotting
if ~isfield(Mesh.geometry,'ElemMat')
    Mesh = ElementAdjecency(Mesh);
end

% plot tesselation                                                          
h{1} = patch('Faces',Mesh.geometry.ElemMat,'Vertices',Mesh.Node,            ...
    'FaceVertexCData',Z,'Facecolor',fs,'LineStyle',Mesh.options.LineStyle,  ...
    'Linewidth',1.5,'EdgeColor','k');

% plot boundaries
if ~strcmpi(Mesh.options.LineStyle,'none')
    h{2} = patch('Faces',Mesh.geometry.Boundary,'Vertices',Mesh.Node,       ...
        'LineStyle','-','Linewidth',1.5,'EdgeColor','k');
end

hold on;
colormap(Mesh.options.ColorMap);
axis(Mesh.BdBox); 
axis tight equal;

end