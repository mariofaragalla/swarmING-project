
classdef Param < ros.Message
    %Param MATLAB implementation of mavros_msgs/Param
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/Param' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '62165a8f212050223dda9583b0f22c3c' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Value' 'ParamId' 'ParamIndex' 'ParamCount' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'value' 'param_id' 'param_index' 'param_count' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
			 'ros.msggen.mavros_msgs.ParamValue' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        Value
        ParamId
        ParamIndex
        ParamCount
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'Param', 'Header')
            obj.Header = val;
        end
        function set.Value(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.mavros_msgs.ParamValue'};
            validateattributes(val, validClasses, validAttributes, 'Param', 'Value')
            obj.Value = val;
        end
        function set.ParamId(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'Param', 'ParamId');
            obj.ParamId = char(val);
        end
        function set.ParamIndex(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Param', 'ParamIndex');
            obj.ParamIndex = uint16(val);
        end
        function set.ParamCount(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'Param', 'ParamCount');
            obj.ParamCount = uint16(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.Param.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.Param;
            obj.reload(strObj);
        end
    end
end
