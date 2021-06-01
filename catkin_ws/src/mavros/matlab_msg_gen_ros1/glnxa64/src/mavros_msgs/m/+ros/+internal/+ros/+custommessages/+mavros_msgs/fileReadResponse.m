function [data, info] = fileReadResponse
%FileRead gives an empty data for mavros_msgs/FileReadResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.data, info.data] = ros.internal.ros.messages.ros.default_type('uint8',NaN);
[data.success, info.success] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.r_errno, info.r_errno] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'mavros_msgs/FileReadResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'data';
info.MatPath{2} = 'success';
info.MatPath{3} = 'r_errno';
