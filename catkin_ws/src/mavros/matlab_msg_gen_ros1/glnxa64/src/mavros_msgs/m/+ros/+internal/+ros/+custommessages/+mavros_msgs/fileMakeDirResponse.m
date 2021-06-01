function [data, info] = fileMakeDirResponse
%FileMakeDir gives an empty data for mavros_msgs/FileMakeDirResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.success, info.success] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.r_errno, info.r_errno] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'mavros_msgs/FileMakeDirResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'success';
info.MatPath{2} = 'r_errno';
