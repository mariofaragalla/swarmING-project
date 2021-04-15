
"use strict";

let FileRead = require('./FileRead.js')
let ParamSet = require('./ParamSet.js')
let CommandTOL = require('./CommandTOL.js')
let CommandHome = require('./CommandHome.js')
let MessageInterval = require('./MessageInterval.js')
let CommandTriggerControl = require('./CommandTriggerControl.js')
let CommandLong = require('./CommandLong.js')
let ParamPull = require('./ParamPull.js')
let WaypointClear = require('./WaypointClear.js')
let SetMavFrame = require('./SetMavFrame.js')
let WaypointPush = require('./WaypointPush.js')
let FileChecksum = require('./FileChecksum.js')
let FileClose = require('./FileClose.js')
let FileList = require('./FileList.js')
let FileRemove = require('./FileRemove.js')
let LogRequestEnd = require('./LogRequestEnd.js')
let ParamGet = require('./ParamGet.js')
let FileWrite = require('./FileWrite.js')
let SetMode = require('./SetMode.js')
let FileRename = require('./FileRename.js')
let CommandBool = require('./CommandBool.js')
let FileRemoveDir = require('./FileRemoveDir.js')
let WaypointSetCurrent = require('./WaypointSetCurrent.js')
let LogRequestList = require('./LogRequestList.js')
let CommandInt = require('./CommandInt.js')
let FileOpen = require('./FileOpen.js')
let ParamPush = require('./ParamPush.js')
let StreamRate = require('./StreamRate.js')
let LogRequestData = require('./LogRequestData.js')
let CommandTriggerInterval = require('./CommandTriggerInterval.js')
let FileTruncate = require('./FileTruncate.js')
let WaypointPull = require('./WaypointPull.js')
let VehicleInfoGet = require('./VehicleInfoGet.js')
let CommandVtolTransition = require('./CommandVtolTransition.js')
let MountConfigure = require('./MountConfigure.js')
let FileMakeDir = require('./FileMakeDir.js')

module.exports = {
  FileRead: FileRead,
  ParamSet: ParamSet,
  CommandTOL: CommandTOL,
  CommandHome: CommandHome,
  MessageInterval: MessageInterval,
  CommandTriggerControl: CommandTriggerControl,
  CommandLong: CommandLong,
  ParamPull: ParamPull,
  WaypointClear: WaypointClear,
  SetMavFrame: SetMavFrame,
  WaypointPush: WaypointPush,
  FileChecksum: FileChecksum,
  FileClose: FileClose,
  FileList: FileList,
  FileRemove: FileRemove,
  LogRequestEnd: LogRequestEnd,
  ParamGet: ParamGet,
  FileWrite: FileWrite,
  SetMode: SetMode,
  FileRename: FileRename,
  CommandBool: CommandBool,
  FileRemoveDir: FileRemoveDir,
  WaypointSetCurrent: WaypointSetCurrent,
  LogRequestList: LogRequestList,
  CommandInt: CommandInt,
  FileOpen: FileOpen,
  ParamPush: ParamPush,
  StreamRate: StreamRate,
  LogRequestData: LogRequestData,
  CommandTriggerInterval: CommandTriggerInterval,
  FileTruncate: FileTruncate,
  WaypointPull: WaypointPull,
  VehicleInfoGet: VehicleInfoGet,
  CommandVtolTransition: CommandVtolTransition,
  MountConfigure: MountConfigure,
  FileMakeDir: FileMakeDir,
};
