function [data, info] = gPSRAW
%GPSRAW gives an empty data for mavros_msgs/GPSRAW
% Copyright 2019-2020 The MathWorks, Inc.
data = struct();
[data.header, info.header] = ros.internal.ros.messages.std_msgs.header;
info.header.MLdataType = 'struct';
[data.GPS_FIX_TYPE_NO_GPS, info.GPS_FIX_TYPE_NO_GPS] = ros.internal.ros.messages.ros.default_type('uint8',1, 0);
[data.GPS_FIX_TYPE_NO_FIX, info.GPS_FIX_TYPE_NO_FIX] = ros.internal.ros.messages.ros.default_type('uint8',1, 1);
[data.GPS_FIX_TYPE_2D_FIX, info.GPS_FIX_TYPE_2D_FIX] = ros.internal.ros.messages.ros.default_type('uint8',1, 2);
[data.GPS_FIX_TYPE_3D_FIX, info.GPS_FIX_TYPE_3D_FIX] = ros.internal.ros.messages.ros.default_type('uint8',1, 3);
[data.GPS_FIX_TYPE_DGPS, info.GPS_FIX_TYPE_DGPS] = ros.internal.ros.messages.ros.default_type('uint8',1, 4);
[data.GPS_FIX_TYPE_RTK_FLOATR, info.GPS_FIX_TYPE_RTK_FLOATR] = ros.internal.ros.messages.ros.default_type('uint8',1, 5);
[data.GPS_FIX_TYPE_RTK_FIXEDR, info.GPS_FIX_TYPE_RTK_FIXEDR] = ros.internal.ros.messages.ros.default_type('uint8',1, 6);
[data.GPS_FIX_TYPE_STATIC, info.GPS_FIX_TYPE_STATIC] = ros.internal.ros.messages.ros.default_type('uint8',1, 7);
[data.GPS_FIX_TYPE_PPP, info.GPS_FIX_TYPE_PPP] = ros.internal.ros.messages.ros.default_type('uint8',1, 8);
[data.fix_type, info.fix_type] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.lat, info.lat] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.lon, info.lon] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.alt, info.alt] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.eph, info.eph] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.epv, info.epv] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.vel, info.vel] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.cog, info.cog] = ros.internal.ros.messages.ros.default_type('uint16',1);
[data.satellites_visible, info.satellites_visible] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.alt_ellipsoid, info.alt_ellipsoid] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.h_acc, info.h_acc] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.v_acc, info.v_acc] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.vel_acc, info.vel_acc] = ros.internal.ros.messages.ros.default_type('uint32',1);
[data.hdg_acc, info.hdg_acc] = ros.internal.ros.messages.ros.default_type('int32',1);
[data.dgps_numch, info.dgps_numch] = ros.internal.ros.messages.ros.default_type('uint8',1);
[data.dgps_age, info.dgps_age] = ros.internal.ros.messages.ros.default_type('uint32',1);
info.MessageType = 'mavros_msgs/GPSRAW';
info.constant = 0;
info.default = 0;
info.maxstrlen = NaN;
info.MaxLen = 1;
info.MinLen = 1;
info.MatPath = cell(1,31);
info.MatPath{1} = 'header';
info.MatPath{2} = 'header.seq';
info.MatPath{3} = 'header.stamp';
info.MatPath{4} = 'header.stamp.sec';
info.MatPath{5} = 'header.stamp.nsec';
info.MatPath{6} = 'header.frame_id';
info.MatPath{7} = 'GPS_FIX_TYPE_NO_GPS';
info.MatPath{8} = 'GPS_FIX_TYPE_NO_FIX';
info.MatPath{9} = 'GPS_FIX_TYPE_2D_FIX';
info.MatPath{10} = 'GPS_FIX_TYPE_3D_FIX';
info.MatPath{11} = 'GPS_FIX_TYPE_DGPS';
info.MatPath{12} = 'GPS_FIX_TYPE_RTK_FLOATR';
info.MatPath{13} = 'GPS_FIX_TYPE_RTK_FIXEDR';
info.MatPath{14} = 'GPS_FIX_TYPE_STATIC';
info.MatPath{15} = 'GPS_FIX_TYPE_PPP';
info.MatPath{16} = 'fix_type';
info.MatPath{17} = 'lat';
info.MatPath{18} = 'lon';
info.MatPath{19} = 'alt';
info.MatPath{20} = 'eph';
info.MatPath{21} = 'epv';
info.MatPath{22} = 'vel';
info.MatPath{23} = 'cog';
info.MatPath{24} = 'satellites_visible';
info.MatPath{25} = 'alt_ellipsoid';
info.MatPath{26} = 'h_acc';
info.MatPath{27} = 'v_acc';
info.MatPath{28} = 'vel_acc';
info.MatPath{29} = 'hdg_acc';
info.MatPath{30} = 'dgps_numch';
info.MatPath{31} = 'dgps_age';
