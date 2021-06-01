function [data, info] = streamRateRequest
%StreamRate gives an empty data for mavros_msgs/StreamRateRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.STREAM_ALL, info.STREAM_ALL] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.STREAM_RAW_SENSORS, info.STREAM_RAW_SENSORS] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.STREAM_EXTENDED_STATUS, info.STREAM_EXTENDED_STATUS] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.STREAM_RC_CHANNELS, info.STREAM_RC_CHANNELS] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.STREAM_RAW_CONTROLLER, info.STREAM_RAW_CONTROLLER] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
[data.STREAM_POSITION, info.STREAM_POSITION] = ros.internal.ros.messages.ros.default_type('uint8',1, 6);
[data.STREAM_EXTRA1, info.STREAM_EXTRA1] = ros.internal.ros.messages.ros.default_type('uint8',1, 10);
[data.STREAM_EXTRA2, info.STREAM_EXTRA2] = ros.internal.ros.messages.ros.default_type('uint8',1, 11);
[data.STREAM_EXTRA3, info.STREAM_EXTRA3] = ros.internal.ros.messages.ros.default_type('uint8',1, 12);
[data.stream_id, info.stream_id] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.message_rate, info.message_rate] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.on_off, info.on_off] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'mavros_msgs/StreamRateRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,12);
info.MatPath{1} = 'STREAM_ALL';
info.MatPath{2} = 'STREAM_RAW_SENSORS';
info.MatPath{3} = 'STREAM_EXTENDED_STATUS';
info.MatPath{4} = 'STREAM_RC_CHANNELS';
info.MatPath{5} = 'STREAM_RAW_CONTROLLER';
info.MatPath{6} = 'STREAM_POSITION';
info.MatPath{7} = 'STREAM_EXTRA1';
info.MatPath{8} = 'STREAM_EXTRA2';
info.MatPath{9} = 'STREAM_EXTRA3';
info.MatPath{10} = 'stream_id';
info.MatPath{11} = 'message_rate';
info.MatPath{12} = 'on_off';
