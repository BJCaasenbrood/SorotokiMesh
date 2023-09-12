function A = nanpadding(A0)
A0 = reshape(A0,[],1);
MaxN = max(cellfun(@(E) size(E,2),A0));
PadWNaN = @(E) [E, NaN(size(E,1),MaxN- size(E,2))];
A = cellfun(PadWNaN,A0,'UniformOutput',false);
end

