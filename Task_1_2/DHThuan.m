function [Px, Py] = DHThuan(theta1, theta2, theta3)
syms l0 l1 l2 l3 l4 
l1 = 0.1; l2 = 0.25; l3 = 0.25; l4 = 0.15;
theta123 = 0;
Px = l1 + l2*cos(theta1) + l3*cos(theta1 +theta2) + l4*cos(theta123);
Py = l2*sin(theta1 ) + l3*sin(theta1 + theta2) + l4*sin(theta123);  
end