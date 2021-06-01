
classdef FileReadRequest < ros.Message
    %FileReadRequest MATLAB implementation of mavros_msgs/FileReadRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/FileReadRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'c83da8c18af06c9d7d1b66667fa2bb6b' % The MD5 Checksum of the message definition
        PropertyList = { 'FilePath' 'Offset' 'Size' } % List of non-constant message properties
        ROSPropertyList = { 'file_path' 'offset' 'size' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        FilePath
        Offset
        Size
    end
    methods
        function set.FilePath(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'FileReadRequest', 'FilePath');
            obj.FilePath = char(val);
        end
        function set.Offset(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FileReadRequest', 'Offset');
            obj.Offset = uint64(val);
        end
        function set.Size(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'FileReadRequest', 'Size');
            obj.Size = uint64(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.FileReadRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.FileReadRequest;
            obj.reload(strObj);
        end
    end
end
