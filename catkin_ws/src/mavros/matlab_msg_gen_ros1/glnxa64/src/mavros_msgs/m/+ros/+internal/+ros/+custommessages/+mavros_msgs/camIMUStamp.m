function [data, info] = camIMUStamp
%CamIMUStamp gives an empty data for mavros_msgs/CamIMUStamp
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.frame_stamp, info.frame_stamp] = ros.internal.ros.messages.ros.time;
info.frame_stamp.MLdataType = 'struct';
[data.frame_seq_id, info.frame_seq_id] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'mavros_msgs/CamIMUStamp';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'frame_stamp';
info.MatPath{2} = 'frame_stamp.sec';
info.MatPath{3} = 'frame_stamp.nsec';
info.MatPath{4} = 'frame_seq_id';
