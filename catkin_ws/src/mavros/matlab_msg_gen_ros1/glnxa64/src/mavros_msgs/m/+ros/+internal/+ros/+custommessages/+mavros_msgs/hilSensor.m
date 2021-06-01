function [data, info] = hilSensor
%HilSensor gives an empty data for mavros_msgs/HilSensor
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.acc, info.acc] = ros.internal.ros.messages.geometry_msgs.vector3;
info.acc.MLdataType = 'struct';
[data.gyro, info.gyro] = ros.internal.ros.messages.geometry_msgs.vector3;
info.gyro.MLdataType = 'struct';
[data.mag, info.mag] = ros.internal.ros.messages.geometry_msgs.vector3;
info.mag.MLdataType = 'struct';
[data.abs_pressure, info.abs_pressure] = ros.internal.ros.messages.ros.default_type('single',1);
[data.diff_pressure, info.diff_pressure] = ros.internal.ros.messages.ros.default_type('single',1);
[data.pressure_alt, info.pressure_alt] = ros.internal.ros.messages.ros.default_type('single',1);
[data.temperature, info.temperature] = ros.internal.ros.messages.ros.default_type('single',1);
[data.fields_updated, info.fields_updated] = ros.internal.ros.messages.ros.default_type('uint32',1);
info.MessageType = 'mavros_msgs/HilSensor';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,23);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'acc';
info.MatPath{8} = 'acc.x';
info.MatPath{9} = 'acc.y';
info.MatPath{10} = 'acc.z';
info.MatPath{11} = 'gyro';
info.MatPath{12} = 'gyro.x';
info.MatPath{13} = 'gyro.y';
info.MatPath{14} = 'gyro.z';
info.MatPath{15} = 'mag';
info.MatPath{16} = 'mag.x';
info.MatPath{17} = 'mag.y';
info.MatPath{18} = 'mag.z';
info.MatPath{19} = 'abs_pressure';
info.MatPath{20} = 'diff_pressure';
info.MatPath{21} = 'pressure_alt';
info.MatPath{22} = 'temperature';
info.MatPath{23} = 'fields_updated';
