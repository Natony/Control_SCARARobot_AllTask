function [n1, n2] = IK(P)
px = P(1,1);
py = P(2,1);
pz = P(3,1);
l0=0.2;
l1=0.2;
l2=0.25;
l3=0.2;
l4=0.15;
theta123 = 0;
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
s1_1 = sqrt(1 - c1_1^2);
s1_2 = -sqrt(1 - c1_1^2);
%% Tinh theta1 voi theta2_2
c1_2 = (nx*(l2 + l3*c2) + ny*l3*s2_2) / (l2^2 + 2*l2*l3*c2 + l3^2);
s1_3 = sqrt(1 - c1_2^2);
s1_4 = -sqrt(1 - c1_2^2);
%% Nghiem theta1
theta1_1 = atan2d(s1_1,c1_1);
theta1_2 = atan2d(s1_2,c1_1);
theta1_3 = atan2d(s1_3,c1_2);
theta1_4 = atan2d(s1_4,c1_2);
%% Tinh theta3 
theta3_1 = theta123 -theta2_1 - theta1_1;
theta3_2 = theta123 -theta2_1 - theta1_2;
theta3_3 = theta123 -theta2_2 - theta1_3;
theta3_4 = theta123 -theta2_2 - theta1_4;
%% Kiem tra bo nghiem
P0E = [px;py;pz;1];
%% Bo nghiem 1 va bo nghiem 2
T01=Matrix(0,l1,l0,theta1_1);
T12=Matrix(0,l2,0,theta2_1);
T23=Matrix(0,l3,0,theta3_1);
T03=T01*T12*T23;
P3E=[l4;0;0];
P0E_1=T03*[P3E;1];
if P0E_1 - P0E <[0.0001; 0.0001; 0.0001; 0.0001]
    theta_result_1 = [theta1_1 theta2_1 theta3_1];
else
    theta_result_1 = [theta1_2 theta2_1 theta3_2];
end
%% Bo nghiem 3 va bo nghiem 4
T01=Matrix(0,l1,l0,theta1_3);
T12=Matrix(0,l2,0,theta2_2);
T23=Matrix(0,l3,0,theta3_3);
T03=T01*T12*T23;
P3E=[l4;0;0];
P0E_1=T03*[P3E;1];
if P0E_1 - P0E <[0.0001; 0.0001; 0.0001; 0.0001]
    theta_result_2 = [theta1_3 theta2_2 theta3_3];
else
    theta_result_2 = [theta1_4 theta2_2 theta3_4];
end
n1 = theta_result_1;
n2 = theta_result_2;

