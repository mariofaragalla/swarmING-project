function [data, info] = companionProcessStatus
%CompanionProcessStatus gives an empty data for mavros_msgs/CompanionProcessStatus
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.state, info.state] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.component, info.component] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.MAV_STATE_UNINIT, info.MAV_STATE_UNINIT] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.MAV_STATE_BOOT, info.MAV_STATE_BOOT] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.MAV_STATE_CALIBRATING, info.MAV_STATE_CALIBRATING] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.MAV_STATE_STANDBY, info.MAV_STATE_STANDBY] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.MAV_STATE_ACTIVE, info.MAV_STATE_ACTIVE] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
[data.MAV_STATE_CRITICAL, info.MAV_STATE_CRITICAL] = ros.internal.ros.messages.ros.default_type('uint8',1, 5);
[data.MAV_STATE_EMERGENCY, info.MAV_STATE_EMERGENCY] = ros.internal.ros.messages.ros.default_type('uint8',1, 6);
[data.MAV_STATE_POWEROFF, info.MAV_STATE_POWEROFF] = ros.internal.ros.messages.ros.default_type('uint8',1, 7);
[data.MAV_STATE_FLIGHT_TERMINATION, info.MAV_STATE_FLIGHT_TERMINATION] = ros.internal.ros.messages.ros.default_type('uint8',1, 8);
[data.MAV_COMP_ID_OBSTACLE_AVOIDANCE, info.MAV_COMP_ID_OBSTACLE_AVOIDANCE] = ros.internal.ros.messages.ros.default_type('uint8',1, 196);
[data.MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY, info.MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY] = ros.internal.ros.messages.ros.default_type('uint8',1, 197);
info.MessageType = 'mavros_msgs/CompanionProcessStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,19);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'state';
info.MatPath{8} = 'component';
info.MatPath{9} = 'MAV_STATE_UNINIT';
info.MatPath{10} = 'MAV_STATE_BOOT';
info.MatPath{11} = 'MAV_STATE_CALIBRATING';
info.MatPath{12} = 'MAV_STATE_STANDBY';
info.MatPath{13} = 'MAV_STATE_ACTIVE';
info.MatPath{14} = 'MAV_STATE_CRITICAL';
info.MatPath{15} = 'MAV_STATE_EMERGENCY';
info.MatPath{16} = 'MAV_STATE_POWEROFF';
info.MatPath{17} = 'MAV_STATE_FLIGHT_TERMINATION';
info.MatPath{18} = 'MAV_COMP_ID_OBSTACLE_AVOIDANCE';
info.MatPath{19} = 'MAV_COMP_ID_VISUAL_INERTIAL_ODOMETRY';
