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
smiData.RigidTransform(1).translation = [200.00000000000006 -40.000000000000007 59.999999999999972];  % mm
smiData.RigidTransform(1).angle = 0;  % rad
smiData.RigidTransform(1).axis = [0 0 0];
smiData.RigidTransform(1).ID = "B[link1-2:-:link2-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [6.1173288656846125e-14 -40.000000000000014 29.999999999999947];  % mm
smiData.RigidTransform(2).angle = 1.9122059082303916e-15;  % rad
smiData.RigidTransform(2).axis = [0.22685709734591541 0.97392805554814266 2.1124376900910806e-16];
smiData.RigidTransform(2).ID = "F[link1-2:-:link2-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [200 0 260];  % mm
smiData.RigidTransform(3).angle = 0;  % rad
smiData.RigidTransform(3).axis = [0 0 0];
smiData.RigidTransform(3).ID = "B[base_mp-1:-:link1-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [-4.1688874574674628e-14 -39.999999999999986 29.999999999999993];  % mm
smiData.RigidTransform(4).angle = 1.9413575217890392e-15;  % rad
smiData.RigidTransform(4).axis = [-0.28288710075620699 -0.95915321415598009 2.6337627937543252e-16];
smiData.RigidTransform(4).ID = "F[base_mp-1:-:link1-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [250.00000000000011 -40.000000000000007 60];  % mm
smiData.RigidTransform(5).angle = 0;  % rad
smiData.RigidTransform(5).axis = [0 0 0];
smiData.RigidTransform(5).ID = "B[link2-1:-:link4-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [1.7053025658242404e-13 -39.999999999999993 30.000000000000021];  % mm
smiData.RigidTransform(6).angle = 1.9179915341761259e-15;  % rad
smiData.RigidTransform(6).axis = [-0.20332746111836889 -0.97911079227795172 1.9091698428544371e-16];
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
smiData.Solid(2).mass = 0.35742232954656833;  % kg
smiData.Solid(2).CoM = [56.31740782207563 -40 14.999999999999998];  % mm
smiData.Solid(2).MoI = [212.97462716893952 840.97245922331751 1000.3337369602718];  % kg*mm^2
smiData.Solid(2).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(2).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = "link4*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 2.4654865570687492;  % kg
smiData.Solid(3).CoM = [28.643217260047393 0 104.34601762254498];  % mm
smiData.Solid(3).MoI = [21286.870492805905 30443.995174873664 15193.301204140056];  % kg*mm^2
smiData.Solid(3).PoI = [0 -8040.5199396940689 0];  % kg*mm^2
smiData.Solid(3).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = "base_mp*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 0.63079644737231011;  % kg
smiData.Solid(4).CoM = [111.95286118053443 -40 16.792929177080165];  % mm
smiData.Solid(4).MoI = [395.52975803341332 3669.3717816585654 3906.4791815230005];  % kg*mm^2
smiData.Solid(4).PoI = [0 -99.578968014540067 0];  % kg*mm^2
smiData.Solid(4).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(4).opacity = 1;
smiData.Solid(4).ID = "link1*:*Default";


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(3).Rz.Pos = 0.0;
smiData.RevoluteJoint(3).ID = "";

smiData.RevoluteJoint(1).Rz.Pos = 0.036912514026070972;  % deg
smiData.RevoluteJoint(1).ID = "[link1-2:-:link2-1]";

smiData.RevoluteJoint(2).Rz.Pos = 0.59789765682263163;  % deg
smiData.RevoluteJoint(2).ID = "[base_mp-1:-:link1-2]";

smiData.RevoluteJoint(3).Rz.Pos = -2.6839701299603589;  % deg
smiData.RevoluteJoint(3).ID = "[link2-1:-:link4-1]";

