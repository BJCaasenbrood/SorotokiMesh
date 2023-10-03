function h = show(Mesh,varargin)
if nargin<2
    Request = -1;
else
    Request = varargin{1};
end

figure(101);

% generate elemental matrices for plotting
AreaC = sum(abs(Mesh.Area(:)))/(0.5*Mesh.NElem)+1e-3;
if ~isfield(Mesh.geometry,'ElemMat')
    Mesh = ElementAdjecency(Mesh);
end

fs  = 'flat';

switch(lower(Request))
    case('sdf'),      Z = Mesh.Sdf.eval(Mesh.Node); Z = Z(:,end); fs = 'interp';
    case('velocity'), Z = (Mesh.Velocity')'; clim([0 0.01]); 
    case('gradient'), Z = GradientField(Mesh,Mesh.Node);
    case('node'),     Z = varargin{2};
    case('element'),  Z = varargin{2};
    case('holes'),    Z = zeros(Mesh.NNode,1);
    case('area'),     Z = abs(Mesh.Area); clim([0, AreaC]);
    case('field'),    Z = varargin{2}; fs = 'interp';
    otherwise;        Z = zeros(Mesh.NNode,1);
end

if ~strcmp(Request,'Node') && ~strcmp(Request,'Element') ...
        && ~strcmp(Request,'Holes')
    
cla; axis equal; axis off; hold on;

if strcmpi(fs,'flat')
    fs = Mesh.options.Color;
end

% plot tesselation
h{1} = patch('Faces',Mesh.geometry.ElemMat,'Vertices',Mesh.Node,            ...
    'FaceVertexCData',Z,'Facecolor',fs,'LineStyle',Mesh.options.LineStyle,  ...
    'Linewidth',1.5,'EdgeColor','k');

% plot boundaries
h{2} = patch('Faces',Mesh.geometry.Boundary,'Vertices',Mesh.Node,           ...
    'LineStyle','-','Linewidth',1.5,'EdgeColor','k');

hold on;

elseif strcmp(Request,'Node')
    if size(Mesh.Node,2) == 2
        plot(Mesh.Node(Z,1),Mesh.Node(Z,2),'.','Color',col(2),...
        'Markersize',20);
    else
        plot3(Mesh.Node(Z,1),Mesh.Node(Z,2),Mesh.Node(Z,3),'.',...
            'Color',col(2),'Markersize',20);
    end
elseif strcmp(Request,'Element')
    plot(Mesh.Center(Z,1),Mesh.Center(Z,2),'.','Color','r');  
elseif strcmp(Request,'Holes')
    for ii = 2:length(Mesh.geometry.BndMat)
        B = Mesh.geometry.BndMat{ii};
        Xoffset = 0.012*(Mesh.BdBox(2)-Mesh.BdBox(1));
        Ctr = mean(Mesh.Node(unique(B(:)),:),1);
        if ii < 10
            text(Ctr(1)-Xoffset,Ctr(2),num2str(ii));
        else
            text(Ctr(1)-2*Xoffset,Ctr(2),num2str(ii));
        end
        Nds = Mesh.Node(B(:),:);
        plot(Nds(2:end-1,1),Nds(2:end-1,2),...
            'linewidth',2); hold on;
    end
end

colormap(Mesh.options.ColorMap);
axis(Mesh.BdBox); 
axis tight;

end