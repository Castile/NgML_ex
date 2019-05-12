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
% if��֧������Ŀ��3.1��X��������2������Ϊx2��x3���ֱ��Ӧͼ�е�x���y�ᣩ
if size(X, 2) <= 3  %% ���������ڽ���2��������X��size(X, 2) <= 3��X�ĵ�1����֮ǰ�˹���ӵ�ȫ1����2��3�в���������
    % Only need 2 points to define a line, so choose two endpoints
    plot_x = [min(X(:,2))-2,  max(X(:,2))+2];    % ȷ������x2�ķ�Χ��������Χ��������2����ͼ��x�����ʾ��Χ����Ҫ����ʵ��ֵ�ķ�Χ

    % ���ݾ��߽߱綨�壬�ɵ� ��'X = 0���� ��1 + ��2*x2 + ��3*x3 = 0��
    % �� x3 = (-1/��3) * (��2*x2 + ��1)
    % �������Ӧx�ᣨ��x2���㴦y�ᣨ��x3����ֵ
    % ע�⣬�˴�plot_y�е�y��ʾy�ᣬ��������y
  
    % ��������ϵ��x���ֵ�����Ӧ��y���ֵ���Ϳ��Ի��Ƴ�DecisionBoundary��ʵ����Ŀ��2
    % Calculate the decision boundary line
    plot_y = (-1./theta(3)).*(theta(2).*plot_x + theta(1));

    % Plot, and adjust axes for better viewing
    plot(plot_x, plot_y)
    
    % Legend, specific for the exercise
    legend('Admitted', 'Not admitted', 'Decision Boundary')
    axis([30, 100, 30, 100])
else  %% ��Ҫ�ܹ�֧�ֶ���2��������X��size(X, 2) > 3��
    % else��֧������Ŀ��3.2��X����������2��
    % Here is the grid range
     % ���Ƶģ�����ȷ��x�ᡢy���ϵ�����ȡֵ�ͷ�Χ
    u = linspace(-1, 1.5, 50);
    v = linspace(-1, 1.5, 50);
    
    z = zeros(length(u), length(v)); % z������д����(x,y)����Ӧ�ĸ߶�ֵ
    % Evaluate z = theta*x over the grid
    for i = 1:length(u)  % ��������(x,y)����Ӧ�ĸ߶�ֵ
        for j = 1:length(v)
            z(i,j) = mapFeature(u(i), v(j))*theta; % �ڷ���߽����Բ�Ϊֱ��ʱ��ʹ��mapFeature��������ԭ���ʹ��ݵ�����ӳ��Ϊ�ߴ����
        end
    end
    % �� z ת�ã������� contour ������x��y����ض�˳��Ҫ��
    z = z'; % important to transpose z before calling contour   

    % Plot z = 0
    % Notice you need to specify the range [0, 0]
    contour(u, v, z, [0, 0], 'LineWidth', 2) % ���Ƹ߶�ֵΪ0�ĵȸ��߼����߽߱磬[0, 0]��ʾ�߶�Ϊ0
end
hold off

end
