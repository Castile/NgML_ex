function [h, display_array] = displayData(X, example_width)
%DISPLAYDATA Display 2D data in a nice grid
%   [h, display_array] = DISPLAYDATA(X, example_width) displays 2D data
%   stored in X in a nice grid. It returns the figure handle h and the 
%   displayed array if requested.

% Set example_width automatically if not passed in
if ~exist('example_width', 'var') || isempty(example_width)  %% ���example_width�����Ĵ��ڻ���example_width��ֵΪ��
	example_width = round(sqrt(size(X, 2))); % ��������  ���  XΪǰ100�� 100 x400   round(sqrt(400)) = round(20) = 20
end

% Gray Image
colormap(gray); % �趨ͼƬ������Ϊ�Ҷ�ͼ

% Compute rows, cols
[m n] = size(X);  % 100 * 400
example_height = (n / example_width); % 400 / 20 = 20

% Compute number of items to display
% 100��ͼƬ�ֳ�10*10��������
display_rows = floor(sqrt(m));  % 10
display_cols = ceil(m / display_rows); 

% Between images padding
pad = 1;  % ÿ��ͼƬ֮��ļ��

% Setup blank display
display_array = - ones(pad + display_rows * (example_height + pad), ...
                       pad + display_cols * (example_width + pad));  %% 211 x 211

% Copy each example into a patch on the display array
curr_ex = 1;
for j = 1:display_rows % j��ʾ��
	for i = 1:display_cols  % i��ʾ��
		if curr_ex > m, % m = 100
			break; 
		end
		% Copy the patch
		
		% Get the max value of the patch
		max_val = max(abs(X(curr_ex, :)));   % ��example�����ֵ 
		display_array(pad + (j - 1) * (example_height + pad) + (1:example_height), ...  % 20 x 20
		              pad + (i - 1) * (example_width + pad) + (1:example_width)) = ...
						reshape(X(curr_ex, :), example_height, example_width) / max_val; %��һ��
		curr_ex = curr_ex + 1;
	end
	if curr_ex > m, 
		break; 
	end
end

% Display Image
h = imagesc(display_array, [-1 1]);

% Do not show axis
axis image off

drawnow;

end
