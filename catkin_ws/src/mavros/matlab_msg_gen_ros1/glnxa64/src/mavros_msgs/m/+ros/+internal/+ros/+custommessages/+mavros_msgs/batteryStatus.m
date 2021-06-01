function [data, info] = batteryStatus
%BatteryStatus gives an empty data for mavros_msgs/BatteryStatus
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.voltage, info.voltage] = ros.internal.ros.messages.ros.default_type('single',1);
[data.current, info.current] = ros.internal.ros.messages.ros.default_type('single',1);
[data.remaining, info.remaining] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'mavros_msgs/BatteryStatus';
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
info.MatPath{7} = 'voltage';
info.MatPath{8} = 'current';
info.MatPath{9} = 'remaining';
