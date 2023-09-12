function [P] = query(Mesh,varargin)

PS1 = varargin{1};
PS2 = Mesh.Center;
PS3 = Mesh.Node;
Nsp = size(PS1,1);
Shp = Mesh.ShapeFnc;

d = cell(Nsp,1);    

% get closest neighbors with element centers
I = knnsearch(PS2,PS1);

for ii = 1:Nsp
   el = Mesh.Element{I(ii)};
   Vsp = PS3(el,:);  % points spanned by element
   Vin = PS1(ii,:);  % point in element
   
   % compute shape function jacobian transformation
   J0 = Vsp.'*Shp{numel(el)}.dNdxi(:,:,1);
   
   V1 = ((J0)\Vsp.').';     % transform elements to reference config.
   dv = mean(V1,1);
   V1 = V1 - dv;            % pull to origin
   V2 = ((J0)\Vin.').'- dv; % transform linepoint to reference config.

   % recover angle
   th = atan2(V2(2),-V2(1));
   r  = sqrt(dot(V2,V2));
   
   L = [0,0; r*cos(pi+th),-r*sin(pi+th)]; % draw line to point 
   P = [V1;V1(1,:)];   
   [xc, yc] = intersections(P(:,1),P(:,2),L(:,1),L(:,2)); 
   
   if isempty(xc) % outside element
    N = Shp{numel(el)}.fnc(r*[cos(th),sin(th)]);
   else % inside element    
    % find line intersection on boundary of element
    N = Shp{numel(el)}.fnc([-xc,yc]);   
   end
   
   % assemble distance filter matrix based on ShpFnc
   if numel(el) == 3
    d{ii} = [repmat(ii,numel(el),1),[el(2);el(1);el(3)],(N)];
   else
    d{ii} = [repmat(ii,numel(el),1),[el(end-1:-1:1).';el(end)],(N)];   
   end
   
end

d = cell2mat(d); 

P = sparse(d(:,1),d(:,2),d(:,3),Nsp,Mesh.NNode);
P = spdiags(1./sum(P,2),0,size(P,1),size(P,1))*P;
end