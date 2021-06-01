function [data, info] = mavlink
%Mavlink gives an empty data for mavros_msgs/Mavlink
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.FRAMING_OK, info.FRAMING_OK] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.FRAMING_BAD_CRC, info.FRAMING_BAD_CRC] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.FRAMING_BAD_SIGNATURE, info.FRAMING_BAD_SIGNATURE] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.MAVLINK_V10, info.MAVLINK_V10] = ros.internal.ros.messages.ros.default_type('uint8',1, 254);
[data.MAVLINK_V20, info.MAVLINK_V20] = ros.internal.ros.messages.ros.default_type('uint8',1, 253);
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.framing_status, info.framing_status] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.magic, info.magic] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.len, info.len] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.incompat_flags, info.incompat_flags] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.compat_flags, info.compat_flags] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.seq, info.seq] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.sysid, info.sysid] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.compid, info.compid] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.msgid, info.msgid] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.checksum, info.checksum] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.payload64, info.payload64] = ros.internal.ros.messages.ros.default_type('uint64',NaN);
[data.signature, info.signature] = ros.internal.ros.messages.ros.default_type('uint8',NaN);
info.MessageType = 'mavros_msgs/Mavlink';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,23);
info.MatPath{1} = 'FRAMING_OK';
info.MatPath{2} = 'FRAMING_BAD_CRC';
info.MatPath{3} = 'FRAMING_BAD_SIGNATURE';
info.MatPath{4} = 'MAVLINK_V10';
info.MatPath{5} = 'MAVLINK_V20';
info.MatPath{6} = 'header';
info.MatPath{7} = 'header.seq';
info.MatPath{8} = 'header.stamp';
info.MatPath{9} = 'header.stamp.sec';
info.MatPath{10} = 'header.stamp.nsec';
info.MatPath{11} = 'header.frame_id';
info.MatPath{12} = 'framing_status';
info.MatPath{13} = 'magic';
info.MatPath{14} = 'len';
info.MatPath{15} = 'incompat_flags';
info.MatPath{16} = 'compat_flags';
info.MatPath{17} = 'seq';
info.MatPath{18} = 'sysid';
info.MatPath{19} = 'compid';
info.MatPath{20} = 'msgid';
info.MatPath{21} = 'checksum';
info.MatPath{22} = 'payload64';
info.MatPath{23} = 'signature';