% Tính theo độ
clear all 
clc 
syms l0 l1 l2 l3 d1 d2 d3 theta1 theta2 theta3 theta4

l0 = 80;
l1 = 99.98;
l2 = 95.14;
l3 = 80;
d1 = 122.4;
d2 = 22.4;
d3 = 18.85;

theta1 = 10;
theta2 = 0;
theta3 = -10;
T01 = John_Craig(l0, 0, d1, theta1);
T12 = John_Craig(l1, 0, d2, theta2);
T23 = John_Craig(l2, 0, d3, theta3);
T34 = John_Craig(l3, 0, 0, 0);
T05 = T01*T12*T23*T34

% Tinh theo rad
% clear all 
% clc 
% syms l0 l1 l2 l3 d1 d2 d3 theta1 theta2 theta3 theta4
% T01 = John_Craig_rad(l0, 0, d1, theta1);
% T12 = John_Craig_rad(l1, 0, d2, theta2);
% T23 = John_Craig_rad(l2, 0, d3, theta3);
% T34 = John_Craig_rad(l3, 0, 0, 0);
% T05 = T01*T12*T23*T34;
% P = simplify(T05(:,4))