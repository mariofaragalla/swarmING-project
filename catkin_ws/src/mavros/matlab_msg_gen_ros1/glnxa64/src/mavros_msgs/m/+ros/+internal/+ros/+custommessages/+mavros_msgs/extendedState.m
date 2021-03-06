function [data, info] = extendedState
%ExtendedState gives an empty data for mavros_msgs/ExtendedState
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.VTOL_STATE_UNDEFINED, info.VTOL_STATE_UNDEFINED] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.VTOL_STATE_TRANSITION_TO_FW, info.VTOL_STATE_TRANSITION_TO_FW] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.VTOL_STATE_TRANSITION_TO_MC, info.VTOL_STATE_TRANSITION_TO_MC] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.VTOL_STATE_MC, info.VTOL_STATE_MC] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.VTOL_STATE_FW, info.VTOL_STATE_FW] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
[data.LANDED_STATE_UNDEFINED, info.LANDED_STATE_UNDEFINED] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.LANDED_STATE_ON_GROUND, info.LANDED_STATE_ON_GROUND] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.LANDED_STATE_IN_AIR, info.LANDED_STATE_IN_AIR] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.LANDED_STATE_TAKEOFF, info.LANDED_STATE_TAKEOFF] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.LANDED_STATE_LANDING, info.LANDED_STATE_LANDING] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.vtol_state, info.vtol_state] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.landed_state, info.landed_state] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'mavros_msgs/ExtendedState';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,18);
info.MatPath{1} = 'VTOL_STATE_UNDEFINED';
info.MatPath{2} = 'VTOL_STATE_TRANSITION_TO_FW';
info.MatPath{3} = 'VTOL_STATE_TRANSITION_TO_MC';
info.MatPath{4} = 'VTOL_STATE_MC';
info.MatPath{5} = 'VTOL_STATE_FW';
info.MatPath{6} = 'LANDED_STATE_UNDEFINED';
info.MatPath{7} = 'LANDED_STATE_ON_GROUND';
info.MatPath{8} = 'LANDED_STATE_IN_AIR';
info.MatPath{9} = 'LANDED_STATE_TAKEOFF';
info.MatPath{10} = 'LANDED_STATE_LANDING';
info.MatPath{11} = 'header';
info.MatPath{12} = 'header.seq';
info.MatPath{13} = 'header.stamp';
info.MatPath{14} = 'header.stamp.sec';
info.MatPath{15} = 'header.stamp.nsec';
info.MatPath{16} = 'header.frame_id';
info.MatPath{17} = 'vtol_state';
info.MatPath{18} = 'landed_state';
