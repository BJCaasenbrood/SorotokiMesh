function msh = diamond_bot(varargin)

    p = inputParser;
    addOptional(p,'n',750);
    parse(p,varargin{:});
    
    currentDir = fileparts(mfilename('fullpath'));
    imagePath = fullfile(currentDir, '..', 'assets', 'diamond_bot.png');

    try
        msh = Mesh(imagePath,'BdBox',[0,170,0,100],...
            'SimplificationTolerance',0.025,'NElem',p.Results.n,...
            'ElementOrder','linear');
        msh = msh.generate(); 
    catch me
        
    end
end