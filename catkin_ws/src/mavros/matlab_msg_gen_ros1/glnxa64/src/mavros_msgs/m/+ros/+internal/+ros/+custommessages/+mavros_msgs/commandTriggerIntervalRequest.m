function [data, info] = commandTriggerIntervalRequest
%CommandTriggerInterval gives an empty data for mavros_msgs/CommandTriggerIntervalRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.cycle_time, info.cycle_time] = ros.internal.ros.messages.ros.default_type('single',1);
[data.integration_time, info.integration_time] = ros.internal.ros.messages.ros.default_type('single',1);
info.MessageType = 'mavros_msgs/CommandTriggerIntervalRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,2);
info.MatPath{1} = 'cycle_time';
info.MatPath{2} = 'integration_time';
