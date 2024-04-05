function P = FK(theta1, theta2, theta3)
L0=0.2;
L1=0.2;
L2=0.25;
L3=0.2;
L4=0.15;
%% The individual transformation:
T01=Matrix(0,L1,L0,theta1);
T12=Matrix(0,L2,0,theta2);
T23=Matrix(0,L3,0,theta3);
%% The transformation matrix between frame(0) and frame (3)
T03=T01*T12*T23;
%% Position of end-effector
P3E=[L4;0;0];
P=T03*[P3E;1];
