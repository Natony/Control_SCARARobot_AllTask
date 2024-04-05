clear all 
clc 
syms x y z l0 l l2 l4 l5 l6 

l0 = 80;
l1 = 99.98;
l2 = 95.14;
l3 = 80;
d1 = 122.4;
d2 = 22.4;
d3 = 18.85;

P = [160 195.12 163.6500];

x = P(1,1);
y = P(1,2);
z = P(1,3);

theta123 = 0;

A = x - l0 - l3*cosd(theta123);
B = y - l3*sind(theta123);
a = 2*A*l1;
b = 2*B*l1;
d = A^2 + B^2 + l1^2 - l2^2;
anpha = atan2d(a/sqrt(a^2+b^2), b/sqrt(a^2+b^2));
s1 = d/sqrt(a^2+b^2);
if(abs(s1 - 1) <= 0.0001)
    if(s1 > 0)
        s1 = 1;
    else s1 = -1;
    end
end
c1 = sqrt(1 - s1^2);
theta1_1 = atan2d(s1, c1) - anpha;
theta1_2 = atan2d(s1, -c1) - anpha;
s2_1 = (y - l3*sind(theta123) - l1*sind(theta1_1)) / l2;
c2_1 = (x - l0 - l1*cosd(theta1_1) - l3*cosd(theta123))/l2;
s2_2 =  (y - l3*sind(theta123) - l1*sind(theta1_2)) / l2;
c2_2 =  (x - l0 - l1*cosd(theta1_2) - l3*cosd(theta123))/l2;
theta2_1 = atan2d(s2_1,c2_1) - theta1_1;
theta2_2 = atan2d(s2_2,c2_2) - theta1_2;
theta3_1 = theta123 - theta1_1 - theta2_1;
theta3_2 = theta123 - theta1_2 - theta2_2;
bo_1 = [theta1_1 theta2_1 theta3_1];
bo_2 = [theta1_2 theta2_2 theta3_2];
