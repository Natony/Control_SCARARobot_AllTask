% Simscape(TM) Multibody(TM) version: 7.6

% This is a model data file derived from a Simscape Multibody Import XML file using the smimport function.
% The data in this file sets the block parameter values in an imported Simscape Multibody model.
% For more information on this file, see the smimport function help page in the Simscape Multibody documentation.
% You can modify numerical values, but avoid any other changes to this file.
% Do not add code to this file. Do not edit the physical units shown in comments.

%%%VariableName:smiData


%============= RigidTransform =============%

%Initialize the RigidTransform structure array by filling in null values.
smiData.RigidTransform(15).translation = [0.0 0.0 0.0];
smiData.RigidTransform(15).angle = 0.0;
smiData.RigidTransform(15).axis = [0.0 0.0 0.0];
smiData.RigidTransform(15).ID = "";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(1).translation = [200.00000000000006 -39.999999999999979 30];  % mm
smiData.RigidTransform(1).angle = 0;  % rad
smiData.RigidTransform(1).axis = [0 0 0];
smiData.RigidTransform(1).ID = "B[link1-2:-:link2-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(2).translation = [4.5741188614556449e-14 -39.999999999999936 6.8809369276888481e-15];  % mm
smiData.RigidTransform(2).angle = 3.5007019874836346e-16;  % rad
smiData.RigidTransform(2).axis = [-0.79557325297848647 -0.60585740826140699 8.4367609135005083e-17];
smiData.RigidTransform(2).ID = "F[link1-2:-:link2-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(3).translation = [200 0 260];  % mm
smiData.RigidTransform(3).angle = 0;  % rad
smiData.RigidTransform(3).axis = [0 0 0];
smiData.RigidTransform(3).ID = "B[base_mp-1:-:link1-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(4).translation = [-6.1825544683813405e-14 -40 29.999999999999996];  % mm
smiData.RigidTransform(4).angle = 3.9443101460176068e-16;  % rad
smiData.RigidTransform(4).axis = [0.30891567778297901 0.95108943008524849 5.7943185309609223e-17];
smiData.RigidTransform(4).ID = "F[base_mp-1:-:link1-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(5).translation = [0 -40.000000000000007 0];  % mm
smiData.RigidTransform(5).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(5).axis = [1 0 0];
smiData.RigidTransform(5).ID = "B[link1-2:-:thanhnoi-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(6).translation = [47.931615337356476 194.17147125968768 -8.5265128291212022e-14];  % mm
smiData.RigidTransform(6).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(6).axis = [1 -1.7437035905464189e-32 -1.0410007178172518e-16];
smiData.RigidTransform(6).ID = "F[link1-2:-:thanhnoi-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(7).translation = [250 -40.000000000000007 30];  % mm
smiData.RigidTransform(7).angle = 0;  % rad
smiData.RigidTransform(7).axis = [0 0 0];
smiData.RigidTransform(7).ID = "B[link2-1:-:link4-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(8).translation = [-7.629730180980232e-13 -40.000000000000114 1.67299527959082e-12];  % mm
smiData.RigidTransform(8).angle = 2.2976179845838932e-15;  % rad
smiData.RigidTransform(8).axis = [0.42288340845237365 -0.90618409986917281 -4.4023534763690235e-16];
smiData.RigidTransform(8).ID = "F[link2-1:-:link4-1]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(9).translation = [1.1102230246251565e-13 -40.000000000000007 30];  % mm
smiData.RigidTransform(9).angle = 0;  % rad
smiData.RigidTransform(9).axis = [0 0 0];
smiData.RigidTransform(9).ID = "B[link2-1:-:thanhnoi-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(10).translation = [-2.7603794616051504e-14 6.7693492849137416e-15 60];  % mm
smiData.RigidTransform(10).angle = 2.4023535978057305e-16;  % rad
smiData.RigidTransform(10).axis = [-0.87007789624702869 -0.49291424656054011 5.1515324701943773e-17];
smiData.RigidTransform(10).ID = "F[link2-1:-:thanhnoi-2]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(11).translation = [1.1102230246251565e-13 -40.000000000000007 0];  % mm
smiData.RigidTransform(11).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(11).axis = [1 0 0];
smiData.RigidTransform(11).ID = "B[link2-1:-:thanhnoi-3]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(12).translation = [-249.9953319565447 1.5277434133308443 -5.6843418860808015e-14];  % mm
smiData.RigidTransform(12).angle = 3.1415926535897931;  % rad
smiData.RigidTransform(12).axis = [-1 7.2134932994809735e-33 -8.4370591021514409e-17];
smiData.RigidTransform(12).ID = "F[link2-1:-:thanhnoi-3]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(13).translation = [0 -39.999999999999979 30];  % mm
smiData.RigidTransform(13).angle = 0;  % rad
smiData.RigidTransform(13).axis = [0 0 0];
smiData.RigidTransform(13).ID = "B[link4-1:-:thanhnoi-3]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(14).translation = [6.7551970210352278e-13 1.9504562297348094e-13 59.999999999998323];  % mm
smiData.RigidTransform(14).angle = 2.0704957519602582e-15;  % rad
smiData.RigidTransform(14).axis = [-0.42746818019721589 0.90403039490875559 -4.0006556596774766e-16];
smiData.RigidTransform(14).ID = "F[link4-1:-:thanhnoi-3]";

%Translation Method - Cartesian
%Rotation Method - Arbitrary Axis
smiData.RigidTransform(15).translation = [193.02851548476818 -206.19758944696429 -54.895517314139965];  % mm
smiData.RigidTransform(15).angle = 0;  % rad
smiData.RigidTransform(15).axis = [0 0 0];
smiData.RigidTransform(15).ID = "RootGround[base_mp-1]";


%============= Solid =============%
%Center of Mass (CoM) %Moments of Inertia (MoI) %Product of Inertia (PoI)

%Initialize the Solid structure array by filling in null values.
smiData.Solid(5).mass = 0.0;
smiData.Solid(5).CoM = [0.0 0.0 0.0];
smiData.Solid(5).MoI = [0.0 0.0 0.0];
smiData.Solid(5).PoI = [0.0 0.0 0.0];
smiData.Solid(5).color = [0.0 0.0 0.0];
smiData.Solid(5).opacity = 0.0;
smiData.Solid(5).ID = "";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(1).mass = 0.075398223686155036;  % kg
smiData.Solid(1).CoM = [0 0 29.999999999999993];  % mm
smiData.Solid(1).MoI = [30.159289474462014 30.159289474462014 15.079644737231014];  % kg*mm^2
smiData.Solid(1).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(1).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(1).opacity = 1;
smiData.Solid(1).ID = "thanhnoi*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(2).mass = 0.67539822368615521;  % kg
smiData.Solid(2).CoM = [125.00000000000003 -40.000000000000007 15];  % mm
smiData.Solid(2).MoI = [423.43362335677028 5046.5308684529418 5368.6547582567891];  % kg*mm^2
smiData.Solid(2).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(2).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(2).opacity = 1;
smiData.Solid(2).ID = "link2*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(3).mass = 0.55539822368615521;  % kg
smiData.Solid(3).CoM = [100.00000000000004 -40.000000000000007 14.999999999999998];  % mm
smiData.Solid(3).MoI = [350.4336233567704 2960.4158602183234 3227.5397500221707];  % kg*mm^2
smiData.Solid(3).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(3).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(3).opacity = 1;
smiData.Solid(3).ID = "link1*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(4).mass = 0.35742232954656833;  % kg
smiData.Solid(4).CoM = [56.31740782207563 -40 14.999999999999998];  % mm
smiData.Solid(4).MoI = [212.97462716893952 840.9724592233174 1000.3337369602718];  % kg*mm^2
smiData.Solid(4).PoI = [0 0 0];  % kg*mm^2
smiData.Solid(4).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(4).opacity = 1;
smiData.Solid(4).ID = "link4*:*Default";

%Inertia Type - Custom
%Visual Properties - Simple
smiData.Solid(5).mass = 2.4654865570687492;  % kg
smiData.Solid(5).CoM = [28.643217260047393 0 104.34601762254498];  % mm
smiData.Solid(5).MoI = [21286.870492805905 30443.995174873664 15193.301204140056];  % kg*mm^2
smiData.Solid(5).PoI = [0 -8040.5199396940689 0];  % kg*mm^2
smiData.Solid(5).color = [0.792156862745098 0.81960784313725488 0.93333333333333335];
smiData.Solid(5).opacity = 1;
smiData.Solid(5).ID = "base_mp*:*Default";


%============= Joint =============%
%X Revolute Primitive (Rx) %Y Revolute Primitive (Ry) %Z Revolute Primitive (Rz)
%X Prismatic Primitive (Px) %Y Prismatic Primitive (Py) %Z Prismatic Primitive (Pz) %Spherical Primitive (S)
%Constant Velocity Primitive (CV) %Lead Screw Primitive (LS)
%Position Target (Pos)

%Initialize the CylindricalJoint structure array by filling in null values.
smiData.CylindricalJoint(2).Rz.Pos = 0.0;
smiData.CylindricalJoint(2).Pz.Pos = 0.0;
smiData.CylindricalJoint(2).ID = "";

smiData.CylindricalJoint(1).Rz.Pos = 106.19799821454248;  % deg
smiData.CylindricalJoint(1).Pz.Pos = 0;  % mm
smiData.CylindricalJoint(1).ID = "[link2-1:-:thanhnoi-2]";

smiData.CylindricalJoint(2).Rz.Pos = -2.3468177246851436;  % deg
smiData.CylindricalJoint(2).Pz.Pos = 0;  % mm
smiData.CylindricalJoint(2).ID = "[link4-1:-:thanhnoi-3]";


%Initialize the PlanarJoint structure array by filling in null values.
smiData.PlanarJoint(2).Rz.Pos = 0.0;
smiData.PlanarJoint(2).Px.Pos = 0.0;
smiData.PlanarJoint(2).Py.Pos = 0.0;
smiData.PlanarJoint(2).ID = "";

%This joint has been chosen as a cut joint. Simscape Multibody treats cut joints as algebraic constraints to solve closed kinematic loops. The imported model does not use the state target data for this joint.
smiData.PlanarJoint(1).Rz.Pos = -103.86636065784748;  % deg
smiData.PlanarJoint(1).Px.Pos = 0;  % mm
smiData.PlanarJoint(1).Py.Pos = 0;  % mm
smiData.PlanarJoint(1).ID = "[link1-2:-:thanhnoi-2]";

%This joint has been chosen as a cut joint. Simscape Multibody treats cut joints as algebraic constraints to solve closed kinematic loops. The imported model does not use the state target data for this joint.
smiData.PlanarJoint(2).Rz.Pos = -0.35013517831541796;  % deg
smiData.PlanarJoint(2).Px.Pos = 0;  % mm
smiData.PlanarJoint(2).Py.Pos = 0;  % mm
smiData.PlanarJoint(2).ID = "[link2-1:-:thanhnoi-3]";


%Initialize the RevoluteJoint structure array by filling in null values.
smiData.RevoluteJoint(3).Rz.Pos = 0.0;
smiData.RevoluteJoint(3).ID = "";

smiData.RevoluteJoint(1).Rz.Pos = -2.3316375566950081;  % deg
smiData.RevoluteJoint(1).ID = "[link1-2:-:link2-1]";

smiData.RevoluteJoint(2).Rz.Pos = -0.087490338603004605;  % deg
smiData.RevoluteJoint(2).ID = "[base_mp-1:-:link1-2]";

smiData.RevoluteJoint(3).Rz.Pos = 2.6969529030005619;  % deg
smiData.RevoluteJoint(3).ID = "[link2-1:-:link4-1]";

