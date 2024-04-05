function T=John_Craig_rad(a,anpha,d,theta)
% % JohnCraig
T=[cos(theta),-sin(theta),0,a;
sin(theta)*cos(anpha), cos(theta)*cos(anpha),-sin(anpha),-sin(anpha)*d;
sin(theta)*sin(anpha), cos(theta)*sin(anpha),cos(anpha),cos(anpha)*d;
0,0,0,1];
