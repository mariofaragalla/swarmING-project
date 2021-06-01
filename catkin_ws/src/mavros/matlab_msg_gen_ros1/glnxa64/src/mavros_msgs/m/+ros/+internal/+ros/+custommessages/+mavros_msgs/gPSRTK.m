function [data, info] = gPSRTK
%GPSRTK gives an empty data for mavros_msgs/GPSRTK
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.rtk_receiver_id, info.rtk_receiver_id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.wn, info.wn] = ros.internal.ros.messages.ros.default_type('int16',1);
[data.tow, info.tow] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.rtk_health, info.rtk_health] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.rtk_rate, info.rtk_rate] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.nsats, info.nsats] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.baseline_a, info.baseline_a] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.baseline_b, info.baseline_b] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.baseline_c, info.baseline_c] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.accuracy, info.accuracy] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.iar_num_hypotheses, info.iar_num_hypotheses] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'mavros_msgs/GPSRTK';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,17);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'rtk_receiver_id';
info.MatPath{8} = 'wn';
info.MatPath{9} = 'tow';
info.MatPath{10} = 'rtk_health';
info.MatPath{11} = 'rtk_rate';
info.MatPath{12} = 'nsats';
info.MatPath{13} = 'baseline_a';
info.MatPath{14} = 'baseline_b';
info.MatPath{15} = 'baseline_c';
info.MatPath{16} = 'accuracy';
info.MatPath{17} = 'iar_num_hypotheses';