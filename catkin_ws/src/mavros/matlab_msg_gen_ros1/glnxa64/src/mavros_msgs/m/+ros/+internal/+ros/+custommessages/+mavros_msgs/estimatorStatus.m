function [data, info] = estimatorStatus
%EstimatorStatus gives an empty data for mavros_msgs/EstimatorStatus
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.attitude_status_flag, info.attitude_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.velocity_horiz_status_flag, info.velocity_horiz_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.velocity_vert_status_flag, info.velocity_vert_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.pos_horiz_rel_status_flag, info.pos_horiz_rel_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.pos_horiz_abs_status_flag, info.pos_horiz_abs_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.pos_vert_abs_status_flag, info.pos_vert_abs_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.pos_vert_agl_status_flag, info.pos_vert_agl_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.const_pos_mode_status_flag, info.const_pos_mode_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.pred_pos_horiz_rel_status_flag, info.pred_pos_horiz_rel_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.pred_pos_horiz_abs_status_flag, info.pred_pos_horiz_abs_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.gps_glitch_status_flag, info.gps_glitch_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.accel_error_status_flag, info.accel_error_status_flag] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'mavros_msgs/EstimatorStatus';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,18);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'attitude_status_flag';
info.MatPath{8} = 'velocity_horiz_status_flag';
info.MatPath{9} = 'velocity_vert_status_flag';
info.MatPath{10} = 'pos_horiz_rel_status_flag';
info.MatPath{11} = 'pos_horiz_abs_status_flag';
info.MatPath{12} = 'pos_vert_abs_status_flag';
info.MatPath{13} = 'pos_vert_agl_status_flag';
info.MatPath{14} = 'const_pos_mode_status_flag';
info.MatPath{15} = 'pred_pos_horiz_rel_status_flag';
info.MatPath{16} = 'pred_pos_horiz_abs_status_flag';
info.MatPath{17} = 'gps_glitch_status_flag';
info.MatPath{18} = 'accel_error_status_flag';
