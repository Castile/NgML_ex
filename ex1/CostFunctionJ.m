function [ J ] = CostFunctionJ( x, y,theta )
%COSTFUNCTIONJ �˴���ʾ�йش˺�����ժҪ
%   x��design matrix ����ѵ������
%   y������ǩ
m = size(x,1);   % ѵ������������ 
predictions = x*theta;   % 
sqErrors = (predictions-y).^2;

J = 1/(2*m) * sum(sqErrors);
end

