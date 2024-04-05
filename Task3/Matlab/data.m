% Simscape(TM) Multibody(TM) version: 7.6

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(7).translation = [0.0 0.0 0.0];
smiData.RigidTransform(7).angle = 0.0;
smiData.RigidTransform(7).axis = [0.0 0.0 0.0];
smiData.RigidTransform(7).ID = "";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [199.99999999999989 -39.999999999999979 60];  % mm
smiData.RigidTransform(1).angle = 0;  % rad
smiData.RigidTransform(1).axis = [0 0 0];
smiData.RigidTransform(1).ID = "B[link1-2:-:link2-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [-4.0225600628218672e-12 -40.00000000003002 29.999999999994728];  % mm
smiData.RigidTransform(2).angle = 7.8890425859235404e-18;  % rad
smiData.RigidTransform(2).axis = [0.97311554008935919 0.23031748877711128 8.8406791545441585e-19];
smiData.RigidTransform(2).ID = "F[link1-2:-:link2-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [200 0 260];  % mm
smiData.RigidTransform(3).angle = 0;  % rad
smiData.RigidTransform(3).axis = [0 0 0];
smiData.RigidTransform(3).ID = "B[base_mp-1:-:link1-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [3.0746072354759235e-11 -39.999999999992667 30.000000000004306];  % mm
smiData.RigidTransform(4).angle = 1.969125160421687e-15;  % rad
smiData.RigidTransform(4).axis = [0.17969006004016014 0.98372327527753634 1.740364943437551e-16];
smiData.RigidTransform(4).ID = "F[base_mp-1:-:link1-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [249.99999999999989 -40.00000000000005 60];  % mm
smiData.RigidTransform(5).angle = 0;  % rad
smiData.RigidTransform(5).axis = [0 0 0];
smiData.RigidTransform(5).ID = "B[link2-1:-:link4-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [-3.0739327749884637e-11 -39.999999999969646 30.000000000001034];  % mm
smiData.RigidTransform(6).angle = 2.425312969877182e-16;  % rad
smiData.RigidTransform(6).axis = [-0.6528741247301324 0.75746641988794683 -5.9969528543191328e-17];
smiData.RigidTransform(6).ID = "F[link2-1:-:link4-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [193.02851548476818 -206.19758944696429 -54.895517314139965];  % mm
smiData.RigidTransform(7).angle = 0;  % rad
smiData.RigidTransform(7).axis = [0 0 0];
smiData.RigidTransform(7).ID = "RootGround[base_mp-1]";


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(4).mass = 0.0;
smiData.Solid(4).CoM = [0.0 0.0 0.0];
smiData.Solid(4).MoI = [0.0 0.0 0.0];
smiData.Solid(4).PoI = [0.0 0.0 0.0];
smiData.Solid(4).color = [0.0 0.0 0.0];
smiData.Solid(4).opacity = 0.0;
smiData.Solid(4).ID = "";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 0.75079644737231011;  % kg
smiData.Solid(1).CoM = [137.55304016655234 -40.000000000000007 16.506364819986278];  % mm
smiData.Solid(1).MoI = [468.8538546858631 6151.7387285758305 6443.5220317878156];  % kg*mm^2
smiData.Solid(1).PoI = [0 -127.17451545525587 0];  % kg*mm^2
smiData.Solid(1).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = "link2*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0.63079644737231011;  % kg
smiData.Solid(2).CoM = [111.95286118053443 -40 16.792929177080165];  % mm
smiData.Solid(2).MoI = [395.52975803341332 3669.3717816585654 3906.4791815230005];  % kg*mm^2
smiData.Solid(2).PoI = [0 -99.578968014540067 0];  % kg*mm^2
smiData.Solid(2).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = "link1*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.35742232954656833;  % kg
smiData.Solid(3).CoM = [56.31740782207563 -40 14.999999999999998];  % mm
smiData.Solid(3).MoI = [212.97462716893952 840.9724592233174 1000.3337369602718];  % kg*mm^2
smiData.Solid(3).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(3).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = "link4*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 2.4654865570687492;  % kg
smiData.Solid(4).CoM = [28.643217260047393 0 104.34601762254498];  % mm
smiData.Solid(4).MoI = [21286.870492805905 30443.995174873664 15193.301204140056];  % kg*mm^2
smiData.Solid(4).PoI = [0 -8040.5199396940689 0];  % kg*mm^2
smiData.Solid(4).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(4).opacity = 1;
smiData.Solid(4).ID = "base_mp*:*Default";


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(3).Rz.Pos = 0.0;
smiData.RevoluteJoint(3).ID = "";

smiData.RevoluteJoint(1).Rz.Pos = -0.094352268826318017;  % deg
smiData.RevoluteJoint(1).ID = "[link1-2:-:link2-1]";

smiData.RevoluteJoint(2).Rz.Pos = -7.527985918897004;  % deg
smiData.RevoluteJoint(2).ID = "[base_mp-1:-:link1-2]";

smiData.RevoluteJoint(3).Rz.Pos = 7.3722609483020678;  % deg
smiData.RevoluteJoint(3).ID = "[link2-1:-:link4-1]";

