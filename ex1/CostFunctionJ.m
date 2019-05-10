function [ J ] = CostFunctionJ( x, y,theta )
%COSTFUNCTIONJ 此处显示有关此函数的摘要
%   x：design matrix 包含训练样本
%   y：类别标签
m = size(x,1);   % 训练样本的数量 
predictions = x*theta;   % 
sqErrors = (predictions-y).^2;

J = 1/(2*m) * sum(sqErrors);
end

