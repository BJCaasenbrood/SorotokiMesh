%TABULATESHAPEFUNCTIONS Tabulate shape functions for each element in a cell array.
% ShapeFnc = TABULATESHAPEFUNCTIONS(Element) takes a cell array Element, where each
% element represents a different type of element and contains the number of nodes
% for that element. It tabulates the shape functions for each element and returns
% them as a cell array ShapeFnc.
%
% Example:
% Element = {3, 4};
% ShapeFnc = tabulateshapefunctions(Element);
% % ShapeFnc{3} contains the shape functions for a 3-node element
% % ShapeFnc{4} contains the shape functions for a 4-node element
%
% See also CELLFUN, POLYQUAD, POLYSHAPEFNC

function ShapeFnc = tabulateshapefunctions(Element)

ElemNNode = cellfun(@length,Element); 
ShapeFnc  = cell(max(ElemNNode),1);

for nn = min(ElemNNode):max(ElemNNode)
    [W,Q] = PolyQuad(nn);
    ShapeFnc{nn}.W = W;
    ShapeFnc{nn}.N = zeros(nn,1,size(W,1));
    ShapeFnc{nn}.dNdxi = zeros(nn,2,size(W,1));
    ShapeFnc{nn}.fnc = @(x) PolyShapeFnc(nn,x);
    ShapeFnc{nn}.Q = Q;
    
    for q = 1:size(W,1)
        [N, dNdxi] = PolyShapeFnc(nn,Q(q,:));
        
        ShapeFnc{nn}.N(:,:,q) = N;
        ShapeFnc{nn}.dNdxi(:,:,q) = dNdxi;
        
        eta = 2*pi*(q/size(W,1)) + 1e-6;
        ShapeFnc{nn}.Xi(q,:) = [cos(eta), sin(eta)];
    end
end

end

%------------------------------------------------ POLYGONAL SHAPE FUNCTIONS
function [N,dNdxi] = PolyShapeFnc(nn,xi)
N = zeros(nn,1);
alpha  = zeros(nn,1);
dNdxi  = zeros(nn,2);
dalpha = zeros(nn,2);
sum_alpha = 0;
sum_dalpha = zeros(1,2);
A  = zeros(nn,1);
dA = zeros(nn,2);
[p,Tri] = PolyTrnglt(nn,xi);

for i=1:nn
    sctr = Tri(i,:);
    pT = p(sctr,:);
    A(i,1)  = 1/2*det([pT,ones(3,1)]);
    dA(i,1) = 1/2*(pT(3,2)-pT(2,2));
    dA(i,2) = 1/2*(pT(2,1)-pT(3,1));
end

A  = [A(nn,:); A];
dA = [dA(nn,:); dA];

for i=1:nn
    alpha(i,1) = 1/(A(i)*A(i+1));
    dalpha(i,1) = -alpha(i)*(dA(i,1)/A(i)+dA(i+1,1)/A(i+1));
    dalpha(i,2) = -alpha(i)*(dA(i,2)/A(i)+dA(i+1,2)/A(i+1));
    sum_alpha = sum_alpha + alpha(i);
    if i == 1, sum_dalpha(1:2) = dalpha(i,1:2);
    else, sum_dalpha(1:2) = sum_dalpha(1:2) + dalpha(i,1:2);
    end
end

for i=1:nn
    N(i) = alpha(i)/sum_alpha;
    dNdxi(i,1:2) = (dalpha(i,1:2)-N(i)*sum_dalpha(1:2))/sum_alpha;
end

end

%---------------------------------------------------- POLYGON TRIANGULATION
function [p,Tri] = PolyTrnglt(nn,xi)
p = [cos(2*pi*((1:nn))/nn);
     sin(2*pi*((1:nn))/nn)]';

p = [p; xi];

Tri         = zeros(nn,3);
Tri(1:nn,1) = nn+1;
Tri(1:nn,2) = 1:nn;
Tri(1:nn,3) = 2:nn+1;
Tri(nn,3)   = 1;
end

%----------------------------------------------------- POLYGONAL QUADRATURE
function [weight,point] = PolyQuad(nn)
[W,Q]   = TriQuad;                 
[p,Tri] = PolyTrnglt(nn,[0 0]);  
point   = zeros(nn*length(W),2);
weight  = zeros(nn*length(W),1);

for k = 1:nn
    sctr = Tri(k,:);
    for q = 1:length(W)
        [N,dNds] = TriShapeFnc(Q(q,:));  %compute shape functions
        J0 = p(sctr,:)'*dNds;
        l = (k-1)*length(W) + q;
        point(l,:) = N'*p(sctr,:);
        weight(l) = det(J0)*W(q);
    end
end

end

%---------------------------------------------------- TRIANGULAR QUADRATURE
function [weight, point] = TriQuad(precision)
if nargin<1, precision = 0; end

if (precision == 0)
    xw=...
       [0.33333333333333   0.33333333333333     0.50000000000000];

elseif (precision == 1)
    xw=...
       [0.16666666666667    0.16666666666667    0.33333333333333/2
        0.16666666666667    0.66666666666667    0.33333333333333/2
        0.66666666666667    0.16666666666667    0.33333333333333/2];
elseif (precision == 2)
    xw=...
        [0.33333333333333   0.33333333333333    0.22500000000000
        0.47014206410511    0.47014206410511    0.13239415278851
        0.47014206410511    0.05971587178977    0.13239415278851
        0.05971587178977    0.47014206410511    0.13239415278851
        0.10128650732346    0.10128650732346    0.12593918054483
        0.10128650732346    0.79742698535309    0.12593918054483
        0.79742698535309    0.10128650732346    0.12593918054483];
elseif (precision == 3)
    xw=...
        [0.24928674517091   0.24928674517091    0.11678627572638
        0.24928674517091    0.50142650965818    0.11678627572638
        0.50142650965818    0.24928674517091    0.11678627572638
        0.06308901449150    0.06308901449150    0.05084490637021
        0.06308901449150    0.87382197101700    0.05084490637021
        0.87382197101700    0.06308901449150    0.05084490637021
        0.31035245103378    0.63650249912140    0.08285107561837
        0.63650249912140    0.05314504984482    0.08285107561837
        0.05314504984482    0.31035245103378    0.08285107561837
        0.63650249912140    0.31035245103378    0.08285107561837
        0.31035245103378    0.05314504984482    0.08285107561837
        0.05314504984482    0.63650249912140    0.08285107561837];
elseif (precision == 4)
    xw=...
        [0.33333333333333   0.33333333333333    0.14431560767779
        0.45929258829272    0.45929258829272    0.09509163426728
        0.45929258829272    0.08141482341455    0.09509163426728
        0.08141482341455    0.45929258829272    0.09509163426728
        0.17056930775176    0.17056930775176    0.10321737053472
        0.17056930775176    0.65886138449648    0.10321737053472
        0.65886138449648    0.17056930775176    0.10321737053472
        0.05054722831703    0.05054722831703    0.03245849762320
        0.05054722831703    0.89890554336594    0.03245849762320
        0.89890554336594    0.05054722831703    0.03245849762320
        0.26311282963464    0.72849239295540    0.02723031417443
        0.72849239295540    0.00839477740996    0.02723031417443
        0.00839477740996    0.26311282963464    0.02723031417443
        0.72849239295540    0.26311282963464    0.02723031417443
        0.26311282963464    0.00839477740996    0.02723031417443
        0.00839477740996    0.72849239295540    0.02723031417443];
end

point = xw(:,1:2);
weight = xw(:,3);
end

%----------------------------------------------- TRIANGULAR SHAPE FUNCTIONS
function [N, dNds] = TriShapeFnc(s)
N = [1-s(1)-s(2); s(1); s(2)];
dNds=[-1,-1; 1, 0; 0, 1];
end


