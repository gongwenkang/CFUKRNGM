% main function
function [ mapefit,mapepre ,Xb0, bestParams] = optimizeParams(data, nn, objfun, vars, max_iters)

    % Use **bayesopt** to perform optimization.
    results = bayesopt(@(param)objectiveFunction(param, data, nn, objfun), ...
        vars, ...
        'MaxObjectiveEvaluations', max_iters, ... % Maximum number of iterations
        'IsObjectiveDeterministic', true, ... % Assume the objective function is deterministic.
        'AcquisitionFunctionName', 'expected-improvement-plus'); % Acquisition functio

    % Obtain optimization results
    bestParams = results.XAtMinObjective;
    % fprintf('Optimal sigma: %.4f\n', bestParams.sigma);
    % fprintf('Optimal gamma: %.4f\n', bestParams.gamma);
    [ mapefit,mapepre ,Xb0] = objfun(bestParams, data, nn); % Call the objective function.


end