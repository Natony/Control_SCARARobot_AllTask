clc; clear all; close all;
l0 = 0.2; l1 = 0.2; l2 = 0.25; l3 = 0.2; l4 = 0.15;
tt=0;
for the1 = -90:90
    for the2 = -90:90
        for the3 =-90:90
            if (the1 + the2 + the3) == 0 %% Điều kiện của khâu cuối
                tt=tt+1;
                x = l1+l2*cosd(the1)+l3*cosd(the1+the2)+l4*cosd(the1+the2+the3);
                y = l2*sind(the1)+l3*sind(the1+the2)+l4*sind(the1+the2+the3);
                emtry(:,tt) = [x;y];
           end
        end
    end
end
figure(1);
plot(emtry(1,:),emtry(2,:),'.b','MarkerSize',2);