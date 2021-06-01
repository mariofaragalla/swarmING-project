
classdef HilGPS < ros.Message
    %HilGPS MATLAB implementation of mavros_msgs/HilGPS
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/HilGPS' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '313b3baf2319db196fa18376a4900a7b' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Geo' 'FixType' 'Eph' 'Epv' 'Vel' 'Vn' 'Ve' 'Vd' 'Cog' 'SatellitesVisible' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'geo' 'fix_type' 'eph' 'epv' 'vel' 'vn' 've' 'vd' 'cog' 'satellites_visible' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
			 'ros.msggen.geographic_msgs.GeoPoint' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Geo
        FixType
        Eph
        Epv
        Vel
        Vn
        Ve
        Vd
        Cog
        SatellitesVisible
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'Header')
            obj.Header = val;
        end
        function set.Geo(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geographic_msgs.GeoPoint'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'Geo')
            obj.Geo = val;
        end
        function set.FixType(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'FixType');
            obj.FixType = uint8(val);
        end
        function set.Eph(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'Eph');
            obj.Eph = uint16(val);
        end
        function set.Epv(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'Epv');
            obj.Epv = uint16(val);
        end
        function set.Vel(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'Vel');
            obj.Vel = uint16(val);
        end
        function set.Vn(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'Vn');
            obj.Vn = int16(val);
        end
        function set.Ve(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'Ve');
            obj.Ve = int16(val);
        end
        function set.Vd(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'Vd');
            obj.Vd = int16(val);
        end
        function set.Cog(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'Cog');
            obj.Cog = uint16(val);
        end
        function set.SatellitesVisible(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'HilGPS', 'SatellitesVisible');
            obj.SatellitesVisible = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.HilGPS.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.HilGPS;
            obj.reload(strObj);
        end
    end
end