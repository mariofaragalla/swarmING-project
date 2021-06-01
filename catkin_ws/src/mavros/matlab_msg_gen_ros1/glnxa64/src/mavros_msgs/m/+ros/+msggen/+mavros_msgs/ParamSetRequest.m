
classdef ParamSetRequest < ros.Message
    %ParamSetRequest MATLAB implementation of mavros_msgs/ParamSetRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/ParamSetRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '4a17f346bc27984b348c799c674a04d9' % The MD5 Checksum of the message definition
        PropertyList = { 'Value' 'ParamId' } % List of non-constant message properties
        ROSPropertyList = { 'value' 'param_id' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.mavros_msgs.ParamValue' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Value
        ParamId
    end
    methods
        function set.Value(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.mavros_msgs.ParamValue'};
            validateattributes(val, validClasses, validAttributes, 'ParamSetRequest', 'Value')
            obj.Value = val;
        end
        function set.ParamId(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'ParamSetRequest', 'ParamId');
            obj.ParamId = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.ParamSetRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.ParamSetRequest;
            obj.reload(strObj);
        end
    end
end