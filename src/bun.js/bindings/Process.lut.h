// File generated via `make generate-builtins`
static const struct CompactHashIndex processObjectTableIndex[142] = {
    { 43, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 15, 129 },
    { -1, -1 },
    { -1, -1 },
    { 18, 138 },
    { -1, -1 },
    { 45, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 3, 141 },
    { 1, 128 },
    { -1, -1 },
    { 59, -1 },
    { -1, -1 },
    { 10, -1 },
    { -1, -1 },
    { -1, -1 },
    { 31, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 52, -1 },
    { 27, -1 },
    { 12, -1 },
    { -1, -1 },
    { 19, -1 },
    { -1, -1 },
    { 14, 137 },
    { -1, -1 },
    { 36, -1 },
    { -1, -1 },
    { 38, -1 },
    { 55, -1 },
    { 35, -1 },
    { 6, 139 },
    { -1, -1 },
    { 51, -1 },
    { 4, -1 },
    { 47, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 2, -1 },
    { 7, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 40, -1 },
    { -1, -1 },
    { 37, -1 },
    { -1, -1 },
    { 0, -1 },
    { 26, 135 },
    { 16, 130 },
    { 39, -1 },
    { -1, -1 },
    { 23, -1 },
    { 11, -1 },
    { -1, -1 },
    { -1, -1 },
    { 58, -1 },
    { -1, -1 },
    { -1, -1 },
    { 30, 136 },
    { -1, -1 },
    { 29, -1 },
    { 22, -1 },
    { -1, -1 },
    { -1, -1 },
    { 24, -1 },
    { -1, -1 },
    { -1, -1 },
    { 20, -1 },
    { -1, -1 },
    { 5, -1 },
    { -1, -1 },
    { -1, -1 },
    { 48, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 13, 131 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 9, -1 },
    { 25, 133 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 21, 134 },
    { -1, -1 },
    { -1, -1 },
    { -1, -1 },
    { 46, 140 },
    { -1, -1 },
    { 17, -1 },
    { 8, -1 },
    { 28, -1 },
    { 32, 132 },
    { 33, -1 },
    { 34, -1 },
    { 41, -1 },
    { 42, -1 },
    { 44, -1 },
    { 49, -1 },
    { 50, -1 },
    { 53, -1 },
    { 54, -1 },
    { 56, -1 },
    { 57, -1 },
};

static const struct HashTableValue processObjectTableValues[60] = {
   { "abort"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionAbort, 1 } },
   { "allowedNodeEnvironmentFlags"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, Process_stubEmptySet } },
   { "arch"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructArch } },
   { "argv"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructArgv } },
   { "argv0"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructArgv0 } },
   { "assert"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionAssert, 1 } },
   { "binding"_s, ((static_cast<unsigned>(PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { HashTableValue::BuiltinGeneratorType, processObjectBindingCodeGenerator, 1 } },
   { "browser"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructBrowser } },
   { "chdir"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionChdir, 1 } },
   { "config"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructProcessConfigObject } },
   { "cpuUsage"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionCpuUsage, 1 } },
   { "cwd"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionCwd, 1 } },
   { "debugPort"_s, static_cast<unsigned>(PropertyAttribute::CustomAccessor), NoIntrinsic, { HashTableValue::GetterSetterType, processDebugPort, setProcessDebugPort } },
   { "dlopen"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionDlopen, 1 } },
   { "emitWarning"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_emitWarning, 1 } },
   { "env"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructEnv } },
   { "execArgv"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructExecArgv } },
   { "execPath"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructExecPath } },
   { "exit"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionExit, 1 } },
   { "exitCode"_s, static_cast<unsigned>(PropertyAttribute::CustomAccessor), NoIntrinsic, { HashTableValue::GetterSetterType, processExitCode, setProcessExitCode } },
   { "features"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructFeatures } },
   { "getActiveResourcesInfo"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubFunctionReturningArray, 0 } },
   { "getegid"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functiongetegid, 0 } },
   { "geteuid"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functiongeteuid, 0 } },
   { "getgid"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functiongetgid, 0 } },
   { "getgroups"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functiongetgroups, 0 } },
   { "getuid"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functiongetuid, 0 } },
   { "hrtime"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructProcessHrtimeObject } },
   { "isBun"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructIsBun } },
   { "mainModule"_s, ((static_cast<unsigned>(PropertyAttribute::ReadOnly|PropertyAttribute::Builtin|PropertyAttribute::Accessor|PropertyAttribute::Function)) & ~PropertyAttribute::Function) | PropertyAttribute::Builtin, NoIntrinsic, { HashTableValue::BuiltinGeneratorType, processObjectMainModuleCodeGenerator, 0 } },
   { "memoryUsage"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructMemoryUsage } },
   { "moduleLoadList"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, Process_stubEmptyArray } },
   { "nextTick"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionNextTick, 1 } },
   { "openStdin"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionOpenStdin, 0 } },
   { "pid"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructPid } },
   { "platform"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructPlatform } },
   { "ppid"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructPpid } },
   { "reallyExit"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionReallyExit, 1 } },
   { "release"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructProcessReleaseObject } },
   { "revision"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructRevision } },
   { "setSourceMapsEnabled"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubEmptyFunction, 1 } },
   { "stderr"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructStderr } },
   { "stdin"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructStdin } },
   { "stdout"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructStdout } },
   { "title"_s, static_cast<unsigned>(PropertyAttribute::CustomAccessor), NoIntrinsic, { HashTableValue::GetterSetterType, processTitle, setProcessTitle } },
   { "umask"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionUmask, 1 } },
   { "uptime"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_functionUptime, 1 } },
   { "version"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructVersion } },
   { "versions"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, constructVersions } },
   { "_debugEnd"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubEmptyFunction, 0 } },
   { "_debugProcess"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubEmptyFunction, 0 } },
   { "_fatalException"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubEmptyFunction, 1 } },
   { "_getActiveRequests"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubFunctionReturningArray, 0 } },
   { "_getActiveHandles"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubFunctionReturningArray, 0 } },
   { "_linkedBinding"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubEmptyFunction, 0 } },
   { "_preload_modules"_s, static_cast<unsigned>(PropertyAttribute::PropertyCallback), NoIntrinsic, { HashTableValue::LazyPropertyType, Process_stubEmptyObject } },
   { "_rawDebug"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubEmptyFunction, 0 } },
   { "_startProfilerIdleNotifier"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubEmptyFunction, 0 } },
   { "_stopProfilerIdleNotifier"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubEmptyFunction, 0 } },
   { "_tickCallback"_s, static_cast<unsigned>(PropertyAttribute::Function), NoIntrinsic, { HashTableValue::NativeFunctionType, Process_stubEmptyFunction, 0 } },
};

static const struct HashTable processObjectTable =
    { 60, 127, true, nullptr, processObjectTableValues, processObjectTableIndex };
