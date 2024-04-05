clc; clear all; close all;
l0 = 100; l1 = 200; l2 = 250; l3 = 250; l4 = 150;
tt=0; ii = 0; jj = 0;
for the1 = -90:90
    for the2 = -90:90
        for the3 =-90:90
            if (the1 + the2 + the3) == 0 %% Điều kiện của khâu cuối
                tt=tt+1;
                x = l1+l2*cosd(the1)+l3*cosd(the1+the2)+l4*cosd(the1+the2+the3);
                y = l2*sind(the1)+l3*sind(the1+the2)+l4*sind(the1+the2+the3);
                emtry(:,tt) = [x;y];
                    if(atan2(sind(the2),cosd(the2)) > 0)
                        ii = ii+1;
                        emtry1(:,ii)=[x,y];
                    end
                    if(atan2(sind(the2),cosd(the2)) < 0)
                        jj =jj+1;
                        emtry2(:,jj) = [x,y];
                    end
           end
        end
    end
end
figure(1);
plot(emtry(1,:),emtry(2,:),'.b','MarkerSize',2);
figure(2);
plot(emtry1(1,:),emtry1(2,:),'.b','MarkerSize',2);
figure(3);
plot(emtry2(1,:),emtry2(2,:),'.b','MarkerSize',2);