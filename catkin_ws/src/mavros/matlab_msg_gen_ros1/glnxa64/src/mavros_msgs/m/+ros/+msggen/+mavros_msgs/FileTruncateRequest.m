
classdef FileTruncateRequest < ros.Message
    %FileTruncateRequest MATLAB implementation of mavros_msgs/FileTruncateRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/FileTruncateRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '8153dbfb1601dd12c2e69aba3171d186' % The MD5 Checksum of the message definition
        PropertyList = { 'FilePath' 'Length' } % List of non-constant message properties
        ROSPropertyList = { 'file_path' 'length' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        FilePath
        Length
    end
    methods
        function set.FilePath(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'FileTruncateRequest', 'FilePath');
            obj.FilePath = char(val);
        end
        function set.Length(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FileTruncateRequest', 'Length');
            obj.Length = uint64(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.FileTruncateRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.FileTruncateRequest;
            obj.reload(strObj);
        end
    end
end
