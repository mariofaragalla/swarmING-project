function [data, info] = manualControl
%ManualControl gives an empty data for mavros_msgs/ManualControl
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.x, info.x] = ros.internal.ros.messages.ros.default_type('single',1);
[data.y, info.y] = ros.internal.ros.messages.ros.default_type('single',1);
[data.z, info.z] = ros.internal.ros.messages.ros.default_type('single',1);
[data.r, info.r] = ros.internal.ros.messages.ros.default_type('single',1);
[data.buttons, info.buttons] = ros.internal.ros.messages.ros.default_type('uint16',1);
info.MessageType = 'mavros_msgs/ManualControl';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,11);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'x';
info.MatPath{8} = 'y';
info.MatPath{9} = 'z';
info.MatPath{10} = 'r';
info.MatPath{11} = 'buttons';
