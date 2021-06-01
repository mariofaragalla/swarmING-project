function [data, info] = commandTriggerControlRequest
%CommandTriggerControl gives an empty data for mavros_msgs/CommandTriggerControlRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.trigger_enable, info.trigger_enable] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.sequence_reset, info.sequence_reset] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.trigger_pause, info.trigger_pause] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'mavros_msgs/CommandTriggerControlRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,3);
info.MatPath{1} = 'trigger_enable';
info.MatPath{2} = 'sequence_reset';
info.MatPath{3} = 'trigger_pause';
