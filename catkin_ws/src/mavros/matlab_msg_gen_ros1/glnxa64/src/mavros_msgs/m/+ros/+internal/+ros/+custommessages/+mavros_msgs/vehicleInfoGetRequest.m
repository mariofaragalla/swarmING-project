function [data, info] = vehicleInfoGetRequest
%VehicleInfoGet gives an empty data for mavros_msgs/VehicleInfoGetRequest
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.GET_MY_SYSID, info.GET_MY_SYSID] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.GET_MY_COMPID, info.GET_MY_COMPID] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.sysid, info.sysid] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.compid, info.compid] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.get_all, info.get_all] = ros.internal.ros.messages.ros.default_type('logical',1);
info.MessageType = 'mavros_msgs/VehicleInfoGetRequest';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,5);
info.MatPath{1} = 'GET_MY_SYSID';
info.MatPath{2} = 'GET_MY_COMPID';
info.MatPath{3} = 'sysid';
info.MatPath{4} = 'compid';
info.MatPath{5} = 'get_all';
