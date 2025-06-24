% Define the objective function based on the **my\_krngm\_2** function.
function obj = objectiveFunction(param, x0, nn, objfun)
% param is a structure containing the parameters to be optimized
% sigma = param.sigma;   % Retrieve sigma
% gamma = param.gamma;   % Retrieve gamma
    [mapefit, ~, ~] = objfun(param, x0, nn); % Call the objective function.
    obj = mapefit; % The objective is to minimize mapefit.
end