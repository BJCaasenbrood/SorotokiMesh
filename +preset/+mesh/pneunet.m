function msh = pneunet(varargin)
% PNEUNET Generates a mesh using the Mesh class.

    p = inputParser;

    p.addOptional('n',550); % number of elements
    parse(p,varargin{:});
    
    currentDir = fileparts(mfilename('fullpath'));
    imagePath = fullfile(currentDir, '..', 'assets', 'pneunet.png');

    try
        msh = Mesh(imagePath,'BdBox',[0,120,0,20],'NElem',p.Results.n,'ElementOrder','linear');
        msh = msh.generate();
    end
end