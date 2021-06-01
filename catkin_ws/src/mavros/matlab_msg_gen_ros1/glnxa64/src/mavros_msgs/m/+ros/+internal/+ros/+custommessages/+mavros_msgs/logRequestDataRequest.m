function [data, info] = logRequestDataRequest
%LogRequestData gives an empty data for mavros_msgs/LogRequestDataRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.id, info.id] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.offset, info.offset] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.count, info.count] = ros.internal.ros.messages.ros.default_type('uint32',1);
info.MessageType = 'mavros_msgs/LogRequestDataRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'id';
info.MatPath{2} = 'offset';
info.MatPath{3} = 'count';
