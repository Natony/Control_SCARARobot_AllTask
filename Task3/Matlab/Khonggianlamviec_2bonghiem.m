clc; clear all; close all;
L0= 0.2; L1 = 0.2; L2 = 0.25; L3 = 0.2; L4 = 0.15;
theta_range = -90:1:90; % Phạm vi góc theta1, theta2, theta3
tt = 0;
emtry = []; 
emtry1 = []; 
emtry2 = [];
for theta1 = theta_range
    for theta2 = theta_range
        for theta3 = theta_range
            if (theta1 + theta2 + theta3) == 0 %% Điều kiện của khâu cuối
                tt = tt + 1;
                x = L1 + cosd(theta1 + theta2 + theta3) * L4 + L3 * cosd(theta1 + theta2) + L2 * cosd(theta1); % động học thuận 1,
                y = sind(theta1 + theta2 + theta3) * L4 + L3 * sind(theta1 + theta2) + L2 * sind(theta1); % động học thuận 2,
                emtry(:, tt) = [x; y];
                
                %% Động học nghịch              
                P1 = FK(theta1, theta2, theta3);
                try
                    [n1, n2] = IK(P1);   
                    %% Bộ nghiệm 1
                    if all(abs([n1(1) - theta1, n1(2) - theta2]) < 1e-6)
                         x1 = L1 + cosd(theta1 + theta2 + theta3)*L4+ L3*cosd(theta1 + theta2) + L2*cosd(theta1); % động học thuận 1,
                         y1 = sind(theta1 + theta2 + theta3)*L4 + L3*sind(theta1 + theta2) + L2*sind(theta1); % động học thuận 2,
                        emtry1(:, tt) = [x1; y1];
                    end                   
                    %% Bộ nghiệm 2
                    if all(abs([n2(1) - theta1, n2(2) - theta2]) < 1e-6)
                         x2 = L1 + cosd(theta1 + theta2 + theta3)*L4+ L3*cosd(theta1 + theta2) + L2*cosd(theta1); % động học thuận 1,
                         y2 = sind(theta1 + theta2 + theta3)*L4 + L3*sind(theta1 + theta2) + L2*sind(theta1); % động học thuận 2,
                        emtry2(:, tt) = [x2; y2];
                    end
                catch  % Xử lý trường hợp không tìm thấy nghiệm hoặc có lỗi
                    continue; % Bỏ qua vòng lặp và tiếp tục với giá trị theta tiếp theo
                end
            end
        end
    end
end
figure(1);
plot(emtry(1,:), emtry(2,:), '.b', 'MarkerSize', 2);
figure(2);
plot(emtry1(1,:), emtry1(2,:), '.b', 'MarkerSize', 2);
figure(3);
plot(emtry2(1,:), emtry2(2,:), '.b', 'MarkerSize', 2);