
classdef RCIn < ros.Message
    %RCIn MATLAB implementation of mavros_msgs/RCIn
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/RCIn' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1c3eafdb5efbcda3c334e1788bbcfe39' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Rssi' 'Channels' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'rssi' 'channels' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Rssi
        Channels
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'RCIn', 'Header')
            obj.Header = val;
        end
        function set.Rssi(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'RCIn', 'Rssi');
            obj.Rssi = uint8(val);
        end
        function set.Channels(obj, val)
            validClasses = {'numeric'};
            if isempty(val)
                % Allow empty [] input
                val = uint16.empty(0, 1);
            end
            val = val(:);
            validAttributes = {'vector'};
            validateattributes(val, validClasses, validAttributes, 'RCIn', 'Channels');
            obj.Channels = uint16(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.RCIn.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.RCIn;
            obj.reload(strObj);
        end
    end
end
