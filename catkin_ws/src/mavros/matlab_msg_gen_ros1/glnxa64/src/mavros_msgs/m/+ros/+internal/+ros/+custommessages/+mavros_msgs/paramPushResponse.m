function [data, info] = paramPushResponse
%ParamPush gives an empty data for mavros_msgs/ParamPushResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.success, info.success] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.param_transfered, info.param_transfered] = ros.internal.ros.messages.ros.default_type('uint32',1);
info.MessageType = 'mavros_msgs/ParamPushResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'success';
info.MatPath{2} = 'param_transfered';
