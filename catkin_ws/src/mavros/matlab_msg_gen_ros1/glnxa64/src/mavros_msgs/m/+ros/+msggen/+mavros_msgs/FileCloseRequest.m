
classdef FileCloseRequest < ros.Message
    %FileCloseRequest MATLAB implementation of mavros_msgs/FileCloseRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/FileCloseRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'a1f82596372c52a517e1fe32d1e998e8' % The MD5 Checksum of the message definition
        PropertyList = { 'FilePath' } % List of non-constant message properties
        ROSPropertyList = { 'file_path' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        FilePath
    end
    methods
        function set.FilePath(obj, val)
            val = convertStringsToChars(val);
            validClasses = {'char', 'string'};
            validAttributes = {};
            validateattributes(val, validClasses, validAttributes, 'FileCloseRequest', 'FilePath');
            obj.FilePath = char(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.FileCloseRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.FileCloseRequest;
            obj.reload(strObj);
        end
    end
end
