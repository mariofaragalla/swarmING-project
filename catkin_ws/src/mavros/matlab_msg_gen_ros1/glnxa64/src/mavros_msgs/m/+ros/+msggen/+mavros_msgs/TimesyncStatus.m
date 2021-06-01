
classdef TimesyncStatus < ros.Message
    %TimesyncStatus MATLAB implementation of mavros_msgs/TimesyncStatus
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/TimesyncStatus' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '021ec8044e747bea518b441f374ba64b' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'RemoteTimestampNs' 'ObservedOffsetNs' 'EstimatedOffsetNs' 'RoundTripTimeMs' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'remote_timestamp_ns' 'observed_offset_ns' 'estimated_offset_ns' 'round_trip_time_ms' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
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
        RemoteTimestampNs
        ObservedOffsetNs
        EstimatedOffsetNs
        RoundTripTimeMs
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'TimesyncStatus', 'Header')
            obj.Header = val;
        end
        function set.RemoteTimestampNs(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'TimesyncStatus', 'RemoteTimestampNs');
            obj.RemoteTimestampNs = uint64(val);
        end
        function set.ObservedOffsetNs(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'TimesyncStatus', 'ObservedOffsetNs');
            obj.ObservedOffsetNs = int64(val);
        end
        function set.EstimatedOffsetNs(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'TimesyncStatus', 'EstimatedOffsetNs');
            obj.EstimatedOffsetNs = int64(val);
        end
        function set.RoundTripTimeMs(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'TimesyncStatus', 'RoundTripTimeMs');
            obj.RoundTripTimeMs = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.TimesyncStatus.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.TimesyncStatus;
            obj.reload(strObj);
        end
    end
end
