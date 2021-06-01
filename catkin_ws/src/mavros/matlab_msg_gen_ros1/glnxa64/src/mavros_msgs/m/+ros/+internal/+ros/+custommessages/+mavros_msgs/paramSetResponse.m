function [data, info] = paramSetResponse
%ParamSet gives an empty data for mavros_msgs/ParamSetResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.success, info.success] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.value, info.value] = ros.internal.ros.custommessages.mavros_msgs.paramValue;
info.value.MLdataType = 'struct';
info.MessageType = 'mavros_msgs/ParamSetResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'success';
info.MatPath{2} = 'value';
info.MatPath{3} = 'value.integer';
info.MatPath{4} = 'value.real';
