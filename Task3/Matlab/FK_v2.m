px = 0.3;
py = 0.6;
pz = 1.4;
l0=0.2;
l1=0.2;
l2=0.25;
l3=0.2;
l4=0.15;
theta123 = 90;
nx = px - l1 -l4*cosd(theta123);
ny = py - l4*sind(theta123);
%% Tinh theta2
c2 = (nx^2 + ny^2 - l2^2 - l3^2)/(2*l2*l3);
s2_1 = sqrt(1 - c2^2);
s2_2 = -sqrt(1 - c2^2);
%% Nghiem theta2
theta2_1 = atan2d(s2_1, c2);
theta2_2 = atan2d(s2_2, c2);
%% Tinh theta1 voi theta2_1
c1_1 = (nx*(l2 + l3*c2) + ny*l3*s2_1) / (l2^2 + 2*l2*l3*c2 + l3^2);
s1_1 = (nx + ny - c1_1*(l2 + l3*c2 + l3*sind(theta2_1)))/(l2 + l3*c2 - l3*sind(theta2_1));
theta1_1 = atan2d(s1_1,c1_1);
%% Tinh theta1 voi theta2_2
c1_2 = (nx*(l2 + l3*c2) + ny*l3*s2_2) / (l2^2 + 2*l2*l3*c2 + l3^2);
s1_2 = (nx + ny - c1_2*(l2 + l3*c2 + l3*sind(theta2_2)))/(l2 + l3*c2 - l3*sind(theta2_2));
theta1_2 = atan2d(s1_2,c1_2);
%% Tinh theta3 
theta3_1 = theta123 - theta2_1 - theta1_1;
theta3_2 = theta123 - theta2_2 - theta1_2;
theta = [theta1_1 theta2_1 theta3_1;
         theta1_2 theta2_2 theta3_2]
