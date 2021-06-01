function [data, info] = fileListResponse
%FileList gives an empty data for mavros_msgs/FileListResponse
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.list, info.list] = ros.internal.ros.custommessages.mavros_msgs.fileEntry;
info.list.MLdataType = 'struct';
info.list.MaxLen = NaN;
info.list.MinLen = 0;
data.list = data.list([],1);
[data.success, info.success] = ros.internal.ros.messages.ros.default_type('logical',1);
[data.r_errno, info.r_errno] = ros.internal.ros.messages.ros.default_type('int32',1);
info.MessageType = 'mavros_msgs/FileListResponse';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,8);
info.MatPath{1} = 'list';
info.MatPath{2} = 'list.TYPE_FILE';
info.MatPath{3} = 'list.TYPE_DIRECTORY';
info.MatPath{4} = 'list.name';
info.MatPath{5} = 'list.type';
info.MatPath{6} = 'list.size';
info.MatPath{7} = 'success';
info.MatPath{8} = 'r_errno';
