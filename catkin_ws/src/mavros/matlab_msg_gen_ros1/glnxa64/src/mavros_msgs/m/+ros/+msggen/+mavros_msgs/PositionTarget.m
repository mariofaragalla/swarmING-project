
classdef PositionTarget < ros.Message
    %PositionTarget MATLAB implementation of mavros_msgs/PositionTarget
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/PositionTarget' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = 'dedb0081aaf8cb20209737746bb49117' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'Position' 'Velocity' 'AccelerationOrForce' 'CoordinateFrame' 'TypeMask' 'Yaw' 'YawRate' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'position' 'velocity' 'acceleration_or_force' 'coordinate_frame' 'type_mask' 'yaw' 'yaw_rate' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
			 'ros.msggen.geometry_msgs.Point' ...
			 'ros.msggen.geometry_msgs.Vector3' ...
			 'ros.msggen.geometry_msgs.Vector3' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
        FRAMELOCALNED = uint8(1)
        FRAMELOCALOFFSETNED = uint8(7)
        FRAMEBODYNED = uint8(8)
        FRAMEBODYOFFSETNED = uint8(9)
        IGNOREPX = uint16(1)
        IGNOREPY = uint16(2)
        IGNOREPZ = uint16(4)
        IGNOREVX = uint16(8)
        IGNOREVY = uint16(16)
        IGNOREVZ = uint16(32)
        IGNOREAFX = uint16(64)
        IGNOREAFY = uint16(128)
        IGNOREAFZ = uint16(256)
        FORCE = uint16(512)
        IGNOREYAW = uint16(1024)
        IGNOREYAWRATE = uint16(2048)
    end
    properties
        Header
        Position
        Velocity
        AccelerationOrForce
        CoordinateFrame
        TypeMask
        Yaw
        YawRate
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'PositionTarget', 'Header')
            obj.Header = val;
        end
        function set.Position(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Point'};
            validateattributes(val, validClasses, validAttributes, 'PositionTarget', 'Position')
            obj.Position = val;
        end
        function set.Velocity(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Vector3'};
            validateattributes(val, validClasses, validAttributes, 'PositionTarget', 'Velocity')
            obj.Velocity = val;
        end
        function set.AccelerationOrForce(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.geometry_msgs.Vector3'};
            validateattributes(val, validClasses, validAttributes, 'PositionTarget', 'AccelerationOrForce')
            obj.AccelerationOrForce = val;
        end
        function set.CoordinateFrame(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PositionTarget', 'CoordinateFrame');
            obj.CoordinateFrame = uint8(val);
        end
        function set.TypeMask(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PositionTarget', 'TypeMask');
            obj.TypeMask = uint16(val);
        end
        function set.Yaw(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PositionTarget', 'Yaw');
            obj.Yaw = single(val);
        end
        function set.YawRate(obj, val)
            validClasses = {'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'PositionTarget', 'YawRate');
            obj.YawRate = single(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.PositionTarget.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.PositionTarget;
            obj.reload(strObj);
        end
    end
end
