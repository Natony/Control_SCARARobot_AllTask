function [t] = Bruno(a, anpha, d, theta)
t =[cosd(theta)  -cosd(anpha)*sind(theta)    sind(anpha)*sind(theta)   a*cosd(theta);
    sind(theta)   cosd(anpha)*cosd(theta)   -sind(anpha)*cosd(theta)   a*sind(theta);
             0              sind(anpha)               cosd(anpha)              d;
             0                       0                        0             1];
end