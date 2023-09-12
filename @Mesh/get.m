function varargout = get(Mesh, varargin)
    if nargin > 1
        varargout{nargin - 1, 1} = [];

        for ii = 1:length(varargin)
            varargout{ii, 1} = Mesh.(varargin{ii});
        end
    else
        varargout = Mesh.(varargin);
    end
end