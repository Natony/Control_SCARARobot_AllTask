syms theta1 theta2 theta3 L0 L1 L2 L3 L4 d1 d2 d3 d4 
d1 = 30; d2 = 30; d3 = 30; d4 = 30;
% L0=0.2; L1=0.2; L2=0.25; L3=0.2; L4=0.15;
L0 = 150; L1 = 100; L2 = 250; L3 = 250; L4 = 150;

theta1 = 0;
theta2 = 60;
theta3 = -60;
%% The individual transformation:
T01=Matrix(0,L1,L0 + d1 + d2,theta1);
T12=Matrix(0,L2,d3,theta2);
T23=Matrix(0,L3,d4,theta3);
%% The transformation matrix between frame(0) and frame (3)
T03=T01*T12*T23;
%% Position of end-effector
P3E=[L4;0;0];
P0E=T03*[P3E;1]
