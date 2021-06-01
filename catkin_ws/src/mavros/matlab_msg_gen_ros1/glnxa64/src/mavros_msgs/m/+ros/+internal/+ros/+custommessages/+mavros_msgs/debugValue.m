function [data, info] = debugValue
%DebugValue gives an empty data for mavros_msgs/DebugValue
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.index, info.index] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.name, info.name] = ros.internal.ros.messages.ros.char('string',0);
[data.value_float, info.value_float] = ros.internal.ros.messages.ros.default_type('single',1);
[data.value_int, info.value_int] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.data, info.data] = ros.internal.ros.messages.ros.default_type('single',NaN);
[data.type, info.type] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.TYPE_DEBUG, info.TYPE_DEBUG] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.TYPE_DEBUG_VECT, info.TYPE_DEBUG_VECT] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.TYPE_DEBUG_ARRAY, info.TYPE_DEBUG_ARRAY] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.TYPE_NAMED_VALUE_FLOAT, info.TYPE_NAMED_VALUE_FLOAT] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.TYPE_NAMED_VALUE_INT, info.TYPE_NAMED_VALUE_INT] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
info.MessageType = 'mavros_msgs/DebugValue';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,17);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'index';
info.MatPath{8} = 'name';
info.MatPath{9} = 'value_float';
info.MatPath{10} = 'value_int';
info.MatPath{11} = 'data';
info.MatPath{12} = 'type';
info.MatPath{13} = 'TYPE_DEBUG';
info.MatPath{14} = 'TYPE_DEBUG_VECT';
info.MatPath{15} = 'TYPE_DEBUG_ARRAY';
info.MatPath{16} = 'TYPE_NAMED_VALUE_FLOAT';
info.MatPath{17} = 'TYPE_NAMED_VALUE_INT';