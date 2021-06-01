
classdef SetMavFrameRequest < ros.Message
    %SetMavFrameRequest MATLAB implementation of mavros_msgs/SetMavFrameRequest
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/SetMavFrameRequest' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '4d2cf24886f660cde0f73cf6fc86e24c' % The MD5 Checksum of the message definition
        PropertyList = { 'MavFrame' } % List of non-constant message properties
        ROSPropertyList = { 'mav_frame' } % List of non-constant ROS message properties
        PropertyMessageTypes = { '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
        FRAMEGLOBAL = uint8(0)
        FRAMELOCALNED = uint8(1)
        FRAMEMISSION = uint8(2)
        FRAMEGLOBALRELATIVEALT = uint8(3)
        FRAMELOCALENU = uint8(4)
        FRAMEGLOBALINT = uint8(5)
        FRAMEGLOBALRELATIVEALTINT = uint8(6)
        FRAMELOCALOFFSETNED = uint8(7)
        FRAMEBODYNED = uint8(8)
        FRAMEBODYOFFSETNED = uint8(9)
        FRAMEGLOBALTERRAINALT = uint8(10)
        FRAMEGLOBALTERRAINALTINT = uint8(11)
        FRAMEBODYFRD = uint8(12)
        FRAMEBODYFLU = uint8(13)
        FRAMEMOCAPNED = uint8(14)
        FRAMEMOCAPENU = uint8(15)
        FRAMEVISIONNED = uint8(16)
        FRAMEVISIONENU = uint8(17)
        FRAMEESTIMNED = uint8(18)
        FRAMEESTIMENU = uint8(19)
    end
    properties
        MavFrame
    end
    methods
        function set.MavFrame(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'SetMavFrameRequest', 'MavFrame');
            obj.MavFrame = uint8(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.SetMavFrameRequest.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.SetMavFrameRequest;
            obj.reload(strObj);
        end
    end
end