options = optimset('GradObj','on', 'MaxIter', 100);
initialTheta  = zeros(2,1);
[optTheta, functionVal, exitFlag] = fminunc(@costFunctions, initialTheta, options)