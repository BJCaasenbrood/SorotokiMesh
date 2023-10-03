%QUADMESH Plot a quad mesh based on center locations.
%
% QUADMESH(CenterLocations) plots a quad mesh based on the specified
% center locations. The center locations are given as a 1D vector,
% CenterLocations, which represents the x or y coordinates of the center
% points of each cell in the mesh.
%
% Example:
% center_locations = [0, 1, 2];
% quadmesh(center_locations);

function quadmesh(center_locations)
    % Determine the cell size based on the spacing between center locations
    cell_size = center_locations(2) - center_locations(1);
    
    % Create a 2D grid of the center locations
    [x, y] = meshgrid(center_locations);
    
    % Create the vertices
    vertices = [x(:) - cell_size/2, y(:) - cell_size/2; 
                x(:) + cell_size/2, y(:) - cell_size/2; 
                x(:) + cell_size/2, y(:) + cell_size/2; 
                x(:) - cell_size/2, y(:) + cell_size/2];
            
    % Create the faces
    num_cells = length(center_locations);
    faces = zeros((num_cells - 1)*(num_cells - 1), 4);
    for i = 1:num_cells-1
        for j = 1:num_cells-1
            cell_index = (i-1)*(num_cells-1) + j;
            v1 = (i-1)*num_cells + j;
            v2 = (i-1)*num_cells + j + 1;
            v3 = i*num_cells + j + 1;
            v4 = i*num_cells + j;
            faces(cell_index, :) = [v1, v2, v3, v4];
        end
    end
    
    % Plot the quad mesh
    patch('Faces', faces, 'Vertices', vertices, 'FaceColor', 'none', 'EdgeColor', 'k');
    axis equal;
end
