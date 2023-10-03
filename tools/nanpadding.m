%NANPADDING Pad cell array elements with NaN values.
% A = NANPADDING(A0) takes a cell array A0 and pads each element with NaN values
% to match the length of the longest element in A0. The padded elements are
% returned as a new cell array A.
%
% Example:
% A0 = {1, [2 3 4], [5 6]};
% A = nanpadding(A0);
% % A = {1 NaN NaN; 2 3 4; 5 6 NaN}
%
% See also CELLFUN, RESHAPE, MAX, SIZE

function A = nanpadding(A0)
A0 = reshape(A0,[],1);
MaxN = max(cellfun(@(E) size(E,2),A0));
PadWNaN = @(E) [E, NaN(size(E,1),MaxN- size(E,2))];
A = cellfun(PadWNaN,A0,'UniformOutput',false);
end

