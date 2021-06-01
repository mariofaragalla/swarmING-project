function [data, info] = playTuneV2
%PlayTuneV2 gives an empty data for mavros_msgs/PlayTuneV2
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.QBASIC1_1, info.QBASIC1_1] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.MML_MODERN, info.MML_MODERN] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.format, info.format] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.tune, info.tune] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'mavros_msgs/PlayTuneV2';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,4);
info.MatPath{1} = 'QBASIC1_1';
info.MatPath{2} = 'MML_MODERN';
info.MatPath{3} = 'format';
info.MatPath{4} = 'tune';
