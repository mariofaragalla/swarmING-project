function [data, info] = vibration
%Vibration gives an empty data for mavros_msgs/Vibration
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.vibration, info.vibration] = ros.internal.ros.messages.geometry_msgs.vector3;
info.vibration.MLdataType = 'struct';
[data.clipping, info.clipping] = ros.internal.ros.messages.ros.default_type('single',3);
info.MessageType = 'mavros_msgs/Vibration';
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
info.MatPath{7} = 'vibration';
info.MatPath{8} = 'vibration.x';
info.MatPath{9} = 'vibration.y';
info.MatPath{10} = 'vibration.z';
info.MatPath{11} = 'clipping';
