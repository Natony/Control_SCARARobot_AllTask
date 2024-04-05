function T=John_Craig(a,anpha,d,theta)
% % JohnCraig
T=[cosd(theta),-sind(theta),0,a;
sind(theta)*cosd(anpha), cosd(theta)*cosd(anpha),-sind(anpha),-sind(anpha)*d;
sind(theta)*sind(anpha), cosd(theta)*sind(anpha),cosd(anpha),cosd(anpha)*d;
0,0,0,1];
