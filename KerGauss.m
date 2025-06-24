function f = KerGauss(x, y, sigma)
%% Gaussian kernel function
%% Optional parameters
if nargin == 2
    sigma = 1.1;
end
%% 
% f = exp(-sumsqr(x-y)/(2*power(sigma,2)));
f = exp(-sum((x - y).^2) / (2 * sigma^2));

end