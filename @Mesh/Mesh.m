classdef Mesh

    properties (Access = public)
        Sdf;
        options;
        solver;
        geometry;

        Type;
        BdBox;
        Node;
        Element;
        NNode;
        NElem;
        Dim;
        Center;
        Area;
        ShapeFnc;
        ElemNDof;
    end
    
%--------------------------------------------------------------------------
methods  
%--------------------------------------------------------------- Mesh Class
function obj = Mesh(Input,varargin) 
    
    obj.NElem     = 500;
    obj.options   = meshoptions;    
    obj.solver    = solveroptions;
    obj.geometry  = struct;
    obj.Type      = '';
    
    obj.solver.MaxIteration = 100;

    if isa(Input,'char')
       [~,~,ext] = fileparts(Input);
       if strcmp(ext,'.stl')
           if strcmp(varargin{1},'ElementSize')
               obj.options.Hmin = varargin{2};
               obj.options.Hmax = varargin{2};
           else
               error('Requested inputs is ElementSize');
           end
           warning off % Matlab, please fix your stuff...
           [v,f] = GenerateMeshSTL(obj,Input);
           warning on  
           Input = v;
           varargin{1} = f;
           obj.options.STLFile         = struct;
           obj.options.STLFile.Node    = v;
           obj.options.STLFile.Element = f;
            
           obj.ElemNDof = 3 * cellfun(@length, num2cell(f,2));

       elseif strcmp(ext,'.obj')
           [v,f] = objreader(Input);
       elseif strcmp(ext,'.png') || strcmp(ext,'.jpg')
           obj.Type  = 'C2T3'; 
           obj.options.Image = rgb2gray(imread(Input));
           obj.options.Dimension = 2;
       else, cout('err','* extension not recognized');
       end

       if size(Input,3) == 3
            obj.options.Image = rgb2gray(Input);
            obj.options.Dimension = 2;
       end
       
       if isempty(obj.options.Image) && isempty(obj.options.STLFile)  
        obj.Node    = v;
        obj.NNode   = length(v);
        obj.Element = num2cell(f,2);
        obj.NElem   = size(f,1);
        obj.BdBox   = boxhull(v);
       end
    end
       
    if isa(Input,'double')
       if (size(Input,2) ~= 2) && (size(Input,2) ~= 3)
           error('First input should be a Nx2 or Nx3 matrix');
       end
       
       v = Input;
       obj.Node    = v;
       obj.NNode   = length(v);
       obj.Element = num2cell(varargin{1},2);
       obj.NElem   = size(varargin{1},1);
       obj.BdBox   = boxhull(v);   
       obj.Dim     = size(v,2);
       
       obj.geometry.ElemMat = varargin{1};
       
       if obj.Dim == 3 && size(varargin{1},2) == 4
          obj.Type = 'C3T4';  
       elseif obj.Dim == 3 && size(varargin{1},2) == 8
          obj.Type = 'C3H8';  
       elseif obj.Dim == 3 && size(varargin{1},2) == 3
          obj.Type = 'C3T3';     
       elseif obj.Dim == 2 && size(varargin{1},2) == 4
          obj.Type = 'C2Q4'; 
       else
          obj.Type = 'C2T3'; 
       end
       
       varargin{1} = 'NNode';
       varargin{2} = length(v);
       
       [Pc,~] = computeCentroid(obj,obj.Element,v); 
       
       obj.solver.MaxIteration = -1;
       obj.Center = Pc;
       obj.Sdf = @(x) -1*ones(length(Pc),1);
       
       obj = ElementAdjecency(obj);
       
    elseif isa(Input,'function_handle')
       obj.Sdf   = Input;
       obj.NElem = 200;
       
    elseif isa(Input,'Sdf')
       obj.Sdf  = Input;
       obj.NElem = 200;
       if ~isempty(Input.BdBox)
          obj.BdBox = Input.BdBox;
       end
    elseif isa(Input,'uint8')
        obj.Dim   = 2;
        obj.Type  = 'C2T3';
        if size(Input,3) == 3
            obj.options.Image = rgb2gray(Input);
        else
            obj.options.Image = Input;
        end
    end
    
    for ii = 1:2:length(varargin)
        if strcmp(varargin{ii},'Quads')
            N = num2cell(varargin{ii+1});
            obj.Center = quadpoints(obj.BdBox,N{:});
            obj.Type   = 'C2Q4';
        elseif strcmp(varargin{ii},'Hexahedron')
            N = num2cell(varargin{ii+1});
            obj.Center = Hexahedron(obj.BdBox,N{:});
            obj.Type   = 'C3H8';
        elseif strcmp(varargin{ii},'Tetrahedron')
            N = num2cell(varargin{ii+1});
            obj.Center = Hexahedron(obj.BdBox,N{:});
            obj.Type   = 'C3T4';
        else
            if isprop(obj.options,varargin{ii})
                obj.options.(varargin{ii}) = varargin{ii+1};
            elseif isprop(obj.solver,varargin{ii})
                obj.solver.(varargin{ii}) = varargin{ii+1};
            else
                obj.(varargin{ii}) = varargin{ii+1};
            end
        end
    end  
    
    if obj.options.Triangulate
        obj.Type = 'C2T3'; 
    elseif isempty(obj.Sdf)
        obj.Type = 'C3T3'; 
    end
    
    if ~isempty(obj.options.Image)

        if isempty(obj.BdBox)
            [n,m] = size(obj.options.Image);
            obj.BdBox = [0,n,0,m] * (1/10);
        end

        [v,f] = GenerateMeshImage(obj,obj.options.Image);
        
        obj.Node    = v;
        obj.NNode   = length(v);
        obj.Element = num2cell(f,2);
        obj.NElem   = length(f);
        obj.BdBox   = boxhull(v);   
        obj.Dim     = size(v,2);
        
        [Pc,~] = computeCentroid(obj,obj.Element,v); 
       
        obj.Center = Pc;
        obj.Sdf    = @(x) -1*ones(length(Pc),1);
        
    elseif ~isempty(obj.options.STLFile)
        obj = obj.generate();
    end

    assert(~isempty(obj.BdBox), 'Bounding box must be defined via BdBox.');
    obj.Dim = numel(obj.BdBox) / 2;
end

end
end
