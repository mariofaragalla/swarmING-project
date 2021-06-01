
classdef EstimatorStatus < ros.Message
    %EstimatorStatus MATLAB implementation of mavros_msgs/EstimatorStatus
    %   This class was automatically generated by
    %   ros.internal.pubsubEmitter.
    %   Copyright 2014-2020 The MathWorks, Inc.
    properties (Constant)
        MessageType = 'mavros_msgs/EstimatorStatus' % The ROS message type
    end
    properties (Constant, Hidden)
        MD5Checksum = '39dbcc4be3f04b68422f784827c47dd5' % The MD5 Checksum of the message definition
        PropertyList = { 'Header' 'AttitudeStatusFlag' 'VelocityHorizStatusFlag' 'VelocityVertStatusFlag' 'PosHorizRelStatusFlag' 'PosHorizAbsStatusFlag' 'PosVertAbsStatusFlag' 'PosVertAglStatusFlag' 'ConstPosModeStatusFlag' 'PredPosHorizRelStatusFlag' 'PredPosHorizAbsStatusFlag' 'GpsGlitchStatusFlag' 'AccelErrorStatusFlag' } % List of non-constant message properties
        ROSPropertyList = { 'header' 'attitude_status_flag' 'velocity_horiz_status_flag' 'velocity_vert_status_flag' 'pos_horiz_rel_status_flag' 'pos_horiz_abs_status_flag' 'pos_vert_abs_status_flag' 'pos_vert_agl_status_flag' 'const_pos_mode_status_flag' 'pred_pos_horiz_rel_status_flag' 'pred_pos_horiz_abs_status_flag' 'gps_glitch_status_flag' 'accel_error_status_flag' } % List of non-constant ROS message properties
        PropertyMessageTypes = { 'ros.msggen.std_msgs.Header' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 '' ...
			 } % Types of contained nested messages
    end
    properties (Constant)
    end
    properties
        Header
        AttitudeStatusFlag
        VelocityHorizStatusFlag
        VelocityVertStatusFlag
        PosHorizRelStatusFlag
        PosHorizAbsStatusFlag
        PosVertAbsStatusFlag
        PosVertAglStatusFlag
        ConstPosModeStatusFlag
        PredPosHorizRelStatusFlag
        PredPosHorizAbsStatusFlag
        GpsGlitchStatusFlag
        AccelErrorStatusFlag
    end
    methods
        function set.Header(obj, val)
            validAttributes = {'nonempty', 'scalar'};
            validClasses = {'ros.msggen.std_msgs.Header'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'Header')
            obj.Header = val;
        end
        function set.AttitudeStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'AttitudeStatusFlag');
            obj.AttitudeStatusFlag = logical(val);
        end
        function set.VelocityHorizStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'VelocityHorizStatusFlag');
            obj.VelocityHorizStatusFlag = logical(val);
        end
        function set.VelocityVertStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'VelocityVertStatusFlag');
            obj.VelocityVertStatusFlag = logical(val);
        end
        function set.PosHorizRelStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'PosHorizRelStatusFlag');
            obj.PosHorizRelStatusFlag = logical(val);
        end
        function set.PosHorizAbsStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'PosHorizAbsStatusFlag');
            obj.PosHorizAbsStatusFlag = logical(val);
        end
        function set.PosVertAbsStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'PosVertAbsStatusFlag');
            obj.PosVertAbsStatusFlag = logical(val);
        end
        function set.PosVertAglStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'PosVertAglStatusFlag');
            obj.PosVertAglStatusFlag = logical(val);
        end
        function set.ConstPosModeStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'ConstPosModeStatusFlag');
            obj.ConstPosModeStatusFlag = logical(val);
        end
        function set.PredPosHorizRelStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'PredPosHorizRelStatusFlag');
            obj.PredPosHorizRelStatusFlag = logical(val);
        end
        function set.PredPosHorizAbsStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'PredPosHorizAbsStatusFlag');
            obj.PredPosHorizAbsStatusFlag = logical(val);
        end
        function set.GpsGlitchStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'GpsGlitchStatusFlag');
            obj.GpsGlitchStatusFlag = logical(val);
        end
        function set.AccelErrorStatusFlag(obj, val)
            validClasses = {'logical', 'numeric'};
            validAttributes = {'nonempty', 'scalar'};
            validateattributes(val, validClasses, validAttributes, 'EstimatorStatus', 'AccelErrorStatusFlag');
            obj.AccelErrorStatusFlag = logical(val);
        end
    end
    methods (Static, Access = {?matlab.unittest.TestCase, ?ros.Message})
        function obj = loadobj(strObj)
        %loadobj Implements loading of message from MAT file
        % Return an empty object array if the structure element is not defined
            if isempty(strObj)
                obj = ros.msggen.mavros_msgs.EstimatorStatus.empty(0,1);
                return
            end
            % Create an empty message object
            obj = ros.msggen.mavros_msgs.EstimatorStatus;
            obj.reload(strObj);
        end
    end
end
