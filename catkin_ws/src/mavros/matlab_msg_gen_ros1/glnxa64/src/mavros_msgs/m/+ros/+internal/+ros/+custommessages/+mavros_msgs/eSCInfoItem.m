function [data, info] = eSCInfoItem
%ESCInfoItem gives an empty data for mavros_msgs/ESCInfoItem
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.failure_flags, info.failure_flags] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.error_count, info.error_count] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.temperature, info.temperature] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'mavros_msgs/ESCInfoItem';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,9);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'failure_flags';
info.MatPath{8} = 'error_count';
info.MatPath{9} = 'temperature';
