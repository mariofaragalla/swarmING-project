function [data, info] = fileOpenRequest
%FileOpen gives an empty data for mavros_msgs/FileOpenRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.MODE_READ, info.MODE_READ] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.MODE_WRITE, info.MODE_WRITE] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.MODE_CREATE, info.MODE_CREATE] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.file_path, info.file_path] = ros.internal.ros.messages.ros.char('string',0);
[data.mode, info.mode] = ros.internal.ros.messages.ros.default_type('uint8',1);
info.MessageType = 'mavros_msgs/FileOpenRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'MODE_READ';
info.MatPath{2} = 'MODE_WRITE';
info.MatPath{3} = 'MODE_CREATE';
info.MatPath{4} = 'file_path';
info.MatPath{5} = 'mode';
