
classdef BatteryStatus < ros.Message
    %BatteryStatus MATLAB implementation of mavros_msgs/BatteryStatus
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/BatteryStatus' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '8ba4ae7c602c5ae6a7e8f3ffb652dc5f' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Voltage' 'Current' 'Remaining' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'voltage' 'current' 'remaining' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Voltage
        Current
        Remaining
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'BatteryStatus', 'Header')
            obj.Header = val;
        end
        function set.Voltage(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BatteryStatus', 'Voltage');
            obj.Voltage = single(val);
        end
        function set.Current(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BatteryStatus', 'Current');
            obj.Current = single(val);
        end
        function set.Remaining(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'BatteryStatus', 'Remaining');
            obj.Remaining = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.BatteryStatus.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.BatteryStatus;
            obj.reload(strObj);
        end
    end
end