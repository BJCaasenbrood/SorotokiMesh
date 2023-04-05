classdef meshoptions
    
    properties
        AbsTolerance;
        BdBox;
        Dimension;
        ElemMat;
        Color;
        ColorMap;
        StepTolerance;
        Quality;
        Rotation;
        MaxIteration;
        Iteration;
        Type;
        Display;
        Triangulate;
        Movie;
        MovieStart;
        CollapseTolerance;
        Eta;
        LineStyle;
        Image;
        STLFile;
        SimplificationTolerance;
        MatlabMeshType;
    end
    
    methods
        function obj = meshoptions
            %SDFOPTIONS Construct an instance of this class
            %   Detailed explanation goes here
            obj.Dimension = 2;
            obj.Color               = [32, 129, 191]/255;
            obj.ColorMap            = cmap_turbo;
            obj.Quality             = 75;
            obj.StepTolerance       = 1e-5;
            obj.Display             = false;
            obj.MaxIteration        = 100;
            obj.Iteration           = 0;
            obj.ElemMat             = -1;
            obj.StepTolerance       = 1e-6;
            obj.Eta                 = 0.9;
            obj.Triangulate         = false;
            obj.Movie               = false;
            obj.MovieStart          = false;
            obj.CollapseTolerance   = 0.2;
            obj.AbsTolerance        = 1e-3;
            obj.Display             = false;
            obj.ColorMap            = cmap_turbo;
            obj.LineStyle           = '-';
            obj.Type                = 'C2PX';
            obj.Image               = [];
            obj.SimplificationTolerance  = 0.05;
            obj.STLFile             = [];

        end
    end
end

