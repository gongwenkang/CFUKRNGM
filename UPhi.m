function [ result ] = UPhi(X,t,varargin)
%% 
n = length(X)+1;
f = 0;
theta = varargin{1};
sigma = varargin{2};
c = theta^2;
kerfun = @KerGauss;
for j = 2:n
    f = f + 0.5*X(j-1) * (kerfun(j,t,sigma) + kerfun(j-1,t,sigma)+ 2*c);
end
result = f;
% f = 0.5*f;
end