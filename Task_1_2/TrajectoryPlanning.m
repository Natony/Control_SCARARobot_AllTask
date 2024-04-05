function [x, y] = TrajectoryPlanning(t, P0, v0, t0, Pf, vf, tf)
    a10 = P0(1);
    a20 = P0(2);
    a11 = v0(1);
    a21 = v0(2);  
    a12 = 3 / (tf - t0)^2 * (Pf(1) - P0(1)) - 2 / (tf - t0) * v0(1) - 1 / (tf - t0) * vf(1);
    a22 = 3 / (tf - t0)^2 * (Pf(2) - P0(2)) - 2 / (tf - t0) * v0(2) - 1 / (tf - t0) * vf(2);
    a13 = -2 / (tf - t0)^3 * (Pf(1) - P0(1)) + 1 / (tf - t0)^2 * (vf(1) + v0(1));
    a23 = -2 / (tf - t0)^3 * (Pf(2) - P0(2)) + 1 / (tf - t0)^2 * (vf(2) + v0(2));

    if t <= t0
        x = P0(1);
        y = P0(2);
    elseif t <= t0 + tf % Điều chỉnh điều kiện này cho độ dài chu kỳ cụ thể
        tt = t - t0;
        x = a10 + a11 * tt + a12 * tt^2 + a13 * tt^3;
        y = a20 + a21 * tt + a22 * tt^2 + a23 * tt^3;
    elseif t <= t0 + 2 * tf % Điều chỉnh điều kiện này cho độ dài chu kỳ cụ thể
        tt = t - (t0 + tt); 
        x = a10 + a11 * tt + a12 * tt^2 + a13 * tt^3 + a12 * tt^2 + a13 * tt^3; 
        y = a20 + a21 * tt + a22 * tt^2 + a23 * tt^3 + a22 * tt^2 + a23 * tt^3; 
    elseif t <= tf
        tt = t - (t0 + 2 * tt); 
        x = a10 + a11 * tt + a12 * tt^2 + a13 * tt^3 + a12 * tt + a13 * tt^3 + a12 * tt^2 + a13 * tt^3; 
        y = a20 + a21 * tt + a22 * tt^2 + a23 * tt^3 + a22 * tt + a23 * tt^3 + a22 * tt^2 + a23 * tt^3; 
    else
        x = Pf(1);
        y = Pf(2);
    end
end


