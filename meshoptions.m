classdef meshoptions
    
    properties
        Dimension;
        ElemMat;
        Color;
        ColorMap;
        Quality;
        Rotation;
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
        Hmin;
        Hmax;
        ElementSize;
        SimplificationTolerance;
        ElementOrder;
        isGenerated;
    end
    
    methods
        function obj = meshoptions
            %SDFOPTIONS Construct an instance of this class
            %   Detailed explanation goes here
            obj.Dimension = 2;
            obj.Color               = [0.8329 0.8329 0.8329];
            obj.ColorMap            = cmap_turbo;
            obj.Quality             = 75;
            obj.Display             = false;
            obj.ElemMat             = -1;
            obj.Eta                 = 0.99;
            obj.Triangulate         = false;
            obj.Movie               = false;
            obj.MovieStart          = false;
            obj.CollapseTolerance   = 0.2;
            obj.Display             = false;
            obj.ColorMap            = cmap_turbo;
            obj.LineStyle           = '-';
            obj.Type                = 'C2PX';
            obj.Image               = [];
            obj.SimplificationTolerance  = 0.05;
            obj.STLFile             = [];
            obj.ElementOrder        = 'linear';
            obj.isGenerated         = false;

        end
    end
end

