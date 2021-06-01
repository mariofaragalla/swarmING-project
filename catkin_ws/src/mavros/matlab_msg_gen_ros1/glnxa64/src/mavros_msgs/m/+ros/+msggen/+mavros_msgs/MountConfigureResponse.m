
classdef MountConfigureResponse < ros.Message
    %MountConfigureResponse MATLAB implementation of mavros_msgs/MountConfigureResponse
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/MountConfigureResponse' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '1cd894375e4e3d2861d2222772894fdb' % The MD5 Checksum of the message definition
        PropertyList = { 'Success' 'Result' } % List of non-constant message properties
        ROSPropertyList = { 'success' 'result' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Success
        Result
    end
    methods
        function set.Success(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'MountConfigureResponse', 'Success');
            obj.Success = logical(val);
        end
        function set.Result(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'MountConfigureResponse', 'Result');
            obj.Result = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.MountConfigureResponse.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.MountConfigureResponse;
            obj.reload(strObj);
        end
    end
end
