function [data, info] = altitude
%Altitude gives an empty data for mavros_msgs/Altitude
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.monotonic, info.monotonic] = ros.internal.ros.messages.ros.default_type('single',1);
[data.amsl, info.amsl] = ros.internal.ros.messages.ros.default_type('single',1);
[data.local, info.local] = ros.internal.ros.messages.ros.default_type('single',1);
[data.relative, info.relative] = ros.internal.ros.messages.ros.default_type('single',1);
[data.terrain, info.terrain] = ros.internal.ros.messages.ros.default_type('single',1);
[data.bottom_clearance, info.bottom_clearance] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'mavros_msgs/Altitude';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,12);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'monotonic';
info.MatPath{8} = 'amsl';
info.MatPath{9} = 'local';
info.MatPath{10} = 'relative';
info.MatPath{11} = 'terrain';
info.MatPath{12} = 'bottom_clearance';