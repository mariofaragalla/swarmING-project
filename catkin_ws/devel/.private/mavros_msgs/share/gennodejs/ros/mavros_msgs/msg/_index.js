
"use strict";

let HilActuatorControls = require('./HilActuatorControls.js');
let GPSRTK = require('./GPSRTK.js');
let VehicleInfo = require('./VehicleInfo.js');
let OpticalFlowRad = require('./OpticalFlowRad.js');
let OnboardComputerStatus = require('./OnboardComputerStatus.js');
let RCOut = require('./RCOut.js');
let ADSBVehicle = require('./ADSBVehicle.js');
let Altitude = require('./Altitude.js');
let OverrideRCIn = require('./OverrideRCIn.js');
let ParamValue = require('./ParamValue.js');
let ESCInfoItem = require('./ESCInfoItem.js');
let ManualControl = require('./ManualControl.js');
let ActuatorControl = require('./ActuatorControl.js');
let AttitudeTarget = require('./AttitudeTarget.js');
let WaypointList = require('./WaypointList.js');
let MountControl = require('./MountControl.js');
let HilStateQuaternion = require('./HilStateQuaternion.js');
let Vibration = require('./Vibration.js');
let StatusText = require('./StatusText.js');
let PlayTuneV2 = require('./PlayTuneV2.js');
let EstimatorStatus = require('./EstimatorStatus.js');
let Waypoint = require('./Waypoint.js');
let DebugValue = require('./DebugValue.js');
let RCIn = require('./RCIn.js');
let Param = require('./Param.js');
let RTKBaseline = require('./RTKBaseline.js');
let ExtendedState = require('./ExtendedState.js');
let RTCM = require('./RTCM.js');
let HilControls = require('./HilControls.js');
let GPSRAW = require('./GPSRAW.js');
let TimesyncStatus = require('./TimesyncStatus.js');
let VFR_HUD = require('./VFR_HUD.js');
let PositionTarget = require('./PositionTarget.js');
let RadioStatus = require('./RadioStatus.js');
let LandingTarget = require('./LandingTarget.js');
let HilGPS = require('./HilGPS.js');
let BatteryStatus = require('./BatteryStatus.js');
let GlobalPositionTarget = require('./GlobalPositionTarget.js');
let HomePosition = require('./HomePosition.js');
let ESCInfo = require('./ESCInfo.js');
let State = require('./State.js');
let Trajectory = require('./Trajectory.js');
let WheelOdomStamped = require('./WheelOdomStamped.js');
let ESCStatus = require('./ESCStatus.js');
let CommandCode = require('./CommandCode.js');
let WaypointReached = require('./WaypointReached.js');
let CompanionProcessStatus = require('./CompanionProcessStatus.js');
let Thrust = require('./Thrust.js');
let ESCStatusItem = require('./ESCStatusItem.js');
let Mavlink = require('./Mavlink.js');
let CamIMUStamp = require('./CamIMUStamp.js');
let LogData = require('./LogData.js');
let LogEntry = require('./LogEntry.js');
let FileEntry = require('./FileEntry.js');
let HilSensor = require('./HilSensor.js');

module.exports = {
  HilActuatorControls: HilActuatorControls,
  GPSRTK: GPSRTK,
  VehicleInfo: VehicleInfo,
  OpticalFlowRad: OpticalFlowRad,
  OnboardComputerStatus: OnboardComputerStatus,
  RCOut: RCOut,
  ADSBVehicle: ADSBVehicle,
  Altitude: Altitude,
  OverrideRCIn: OverrideRCIn,
  ParamValue: ParamValue,
  ESCInfoItem: ESCInfoItem,
  ManualControl: ManualControl,
  ActuatorControl: ActuatorControl,
  AttitudeTarget: AttitudeTarget,
  WaypointList: WaypointList,
  MountControl: MountControl,
  HilStateQuaternion: HilStateQuaternion,
  Vibration: Vibration,
  StatusText: StatusText,
  PlayTuneV2: PlayTuneV2,
  EstimatorStatus: EstimatorStatus,
  Waypoint: Waypoint,
  DebugValue: DebugValue,
  RCIn: RCIn,
  Param: Param,
  RTKBaseline: RTKBaseline,
  ExtendedState: ExtendedState,
  RTCM: RTCM,
  HilControls: HilControls,
  GPSRAW: GPSRAW,
  TimesyncStatus: TimesyncStatus,
  VFR_HUD: VFR_HUD,
  PositionTarget: PositionTarget,
  RadioStatus: RadioStatus,
  LandingTarget: LandingTarget,
  HilGPS: HilGPS,
  BatteryStatus: BatteryStatus,
  GlobalPositionTarget: GlobalPositionTarget,
  HomePosition: HomePosition,
  ESCInfo: ESCInfo,
  State: State,
  Trajectory: Trajectory,
  WheelOdomStamped: WheelOdomStamped,
  ESCStatus: ESCStatus,
  CommandCode: CommandCode,
  WaypointReached: WaypointReached,
  CompanionProcessStatus: CompanionProcessStatus,
  Thrust: Thrust,
  ESCStatusItem: ESCStatusItem,
  Mavlink: Mavlink,
  CamIMUStamp: CamIMUStamp,
  LogData: LogData,
  LogEntry: LogEntry,
  FileEntry: FileEntry,
  HilSensor: HilSensor,
};
