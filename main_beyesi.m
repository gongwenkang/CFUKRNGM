
% Assume that **x0** and **n** are known inputs.
% x0 = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]; % example data
% n = 5; % Build the model using the first **n** data points.
clc,clear all
close all
data = load('data.txt');
% data = rand(20,1);
data = data';
nn = 15;  % number of the modeling
param.sigma = 1;
param.gama = 2;
param.theta = 3;
param.alpha = 4;
[ mapefit,mapepre ,Xb0] = my_cfukrngm_2_mex(param, data, nn);

%%%%%%%%%%%%%%%%%%%% CFUKRNGM model %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

ObjFun_cfukrngm =@my_cfukrngm_2;  % objective function of krngm
% % Define the variable range for Bayesian optimization.

% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%  rbf kernal function %%%%%%%%%%%%%%%%%%%%%%%%
vars_cfukrngm = [
    optimizableVariable('gama', [1e-2, 1e2], 'Type', 'real', 'Transform', 'log');
    optimizableVariable('theta', [1e-2, 1e2], 'Type', 'real', 'Transform', 'log');
    optimizableVariable('alpha', [0.1, 2], 'Type', 'real', 'Transform', 'log');
    optimizableVariable('sigma', [1e-2, 1e2], 'Type', 'real', 'Transform', 'log')
    ];
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% Optimize the parameters.
max_iters_cfukrngm = 150;
[ mapefit_cfukrngm,mapepre_cfukrngm ,pred_cfukrngm, bestParams_cfukrngm] = optimizeParams(data, nn, ...
    ObjFun_cfukrngm, vars_cfukrngm, max_iters_cfukrngm);
