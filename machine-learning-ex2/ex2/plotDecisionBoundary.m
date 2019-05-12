function plotDecisionBoundary(theta, X, y)
%PLOTDECISIONBOUNDARY Plots the data points X and y into a new figure with
%the decision boundary defined by theta
%   PLOTDECISIONBOUNDARY(theta, X,y) plots the data points with + for the 
%   positive examples and o for the negative examples. X is assumed to be 
%   a either 
%   1) Mx3 matrix, where the first column is an all-ones column for the 
%      intercept.
%   2) MxN, N>3 matrix, where the first column is all-ones

% Plot Data
plotData(X(:,2:3), y);
hold on
% if分支，处理目标3.1（X特征个数2，令其为x2、x3，分别对应图中的x轴和y轴）
if size(X, 2) <= 3  %% 不仅适用于仅有2个特征的X（size(X, 2) <= 3，X的第1列是之前人工添加的全1，第2、3列才是特征）
    % Only need 2 points to define a line, so choose two endpoints
    plot_x = [min(X(:,2))-2,  max(X(:,2))+2];    % 确定特征x2的范围，并将范围向外扩大2，即图上x轴的显示范围，需要多于实际值的范围

    % 根据决策边界定义，可得 θ'X = 0，即 θ1 + θ2*x2 + θ3*x3 = 0，
    % 即 x3 = (-1/θ3) * (θ2*x2 + θ1)
    % 计算出对应x轴（即x2）点处y轴（即x3）的值
    % 注意，此处plot_y中的y表示y轴，而非样本y
  
    % 根据坐标系中x轴的值及其对应的y轴的值，就可以绘制出DecisionBoundary，实现了目标2
    % Calculate the decision boundary line
    plot_y = (-1./theta(3)).*(theta(2).*plot_x + theta(1));

    % Plot, and adjust axes for better viewing
    plot(plot_x, plot_y)
    
    % Legend, specific for the exercise
    legend('Admitted', 'Not admitted', 'Decision Boundary')
    axis([30, 100, 30, 100])
else  %% 还要能够支持多于2个特征的X（size(X, 2) > 3）
    % else分支，处理目标3.2（X特征个数＞2）
    % Here is the grid range
     % 类似的，首先确定x轴、y轴上的坐标取值和范围
    u = linspace(-1, 1.5, 50);
    v = linspace(-1, 1.5, 50);
    
    z = zeros(length(u), length(v)); % z用于填写坐标(x,y)处对应的高度值
    % Evaluate z = theta*x over the grid
    for i = 1:length(u)  % 计算坐标(x,y)处对应的高度值
        for j = 1:length(v)
            z(i,j) = mapFeature(u(i), v(j))*theta; % 在分类边界明显不为直线时，使用mapFeature函数，将原来低次幂的特征映射为高次组合
        end
    end
    % 将 z 转置，以满足 contour 函数对x、y轴的特定顺序要求
    z = z'; % important to transpose z before calling contour   

    % Plot z = 0
    % Notice you need to specify the range [0, 0]
    contour(u, v, z, [0, 0], 'LineWidth', 2) % 绘制高度值为0的等高线即决策边界，[0, 0]表示高度为0
end
hold off

end
