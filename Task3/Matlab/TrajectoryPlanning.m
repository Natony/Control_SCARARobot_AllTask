function [x,y] = TrajectoryPlanning(t,P0,v0,Pf,vf,tf)
a10=P0(1);
a20=P0(2);
a11=v0(1);
a21=v0(2);
a12=3/tf^2*(Pf(1)-P0(1))-2/tf*v0(1)-1/tf*vf(1);
a22=3/tf^2*(Pf(2)-P0(2))-2/tf*v0(2)-1/tf*vf(2);
a13=-2/tf^3*(Pf(1)-P0(1))+1/tf^2*(vf(1)+v0(1));
a23=-2/tf^3*(Pf(2)-P0(2))+1/tf^2*(vf(2)+v0(2));
if (t<=2)
    x=a10+a11*t+a12*t^2+a13*t^3;
    y=a20+a21*t+a22*t^2+a23*t^3;
else
    x=-20;
    y=-20;
end
return
