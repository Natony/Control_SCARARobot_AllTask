clc; clear all; close all;
            l0 = 80;
            l1 = 99.98;
            l2 = 95.14;
            l3 = 80;
            d1 = 122.4;
            d2 = 22.4;
            d3 = 18.85;
            tt=0; 
            for the1 = -90:1:90
                for the2 = -90:1:90
                    for the3 = -90:1:90
                            if (the1+  the2 + the3) == 0 %% Điều kiện của khâu cuối
                                tt=tt+1;
                                x = l0 + l2*cosd(the1+ the2) + l1*cosd(the1) + l3*cosd(the1 + the2 + the3);
                                y = l2*sind(the1+ the2) + l1*sind(the1) + l3*sind(the1 + the2 + the3);
                                x_data(:,tt) = x;
                                y_data(:,tt) = y;
                            end
                    end
                end
            end
figure(1);
plot(x_data,y_data,'.b','MarkerSize',2);