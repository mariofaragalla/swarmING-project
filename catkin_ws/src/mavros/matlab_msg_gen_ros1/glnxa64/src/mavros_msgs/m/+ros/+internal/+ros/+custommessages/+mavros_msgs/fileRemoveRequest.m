function [data, info] = fileRemoveRequest
%FileRemove gives an empty data for mavros_msgs/FileRemoveRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.file_path, info.file_path] = ros.internal.ros.messages.ros.char('string',0);
info.MessageType = 'mavros_msgs/FileRemoveRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,1);
info.MatPath{1} = 'file_path';
