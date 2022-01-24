/*********************************************************************
 * NAN - Native Abstractions for Node.js
 *
 * Copyright (c) 2018 NAN contributors
 *
 * MIT License <https://github.com/nodejs/nan/blob/master/LICENSE.md>
 ********************************************************************/

#include <nan.h>
#include "enumerate_displays.h"   // NOLINT(build/include)
#include "sleep_displays.h"   // NOLINT(build/include)
#include "last_input_info.h"   // NOLINT(build/include)

using v8::FunctionTemplate;
using v8::Object;
using v8::String;
using Nan::GetFunction;
using Nan::New;
using Nan::Set;

// Expose synchronous and asynchronous access to our
// enumerateDisplays() function
NAN_MODULE_INIT(InitAll) {
  Set(target, New<String>("enumerateDisplays").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(enumerateDisplays)).ToLocalChecked());

  Set(target, New<String>("sleepDisplays").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(sleepDisplays)).ToLocalChecked());

  Set(target, New<String>("lastInputInfo").ToLocalChecked(),
    GetFunction(New<FunctionTemplate>(lastInputInfo)).ToLocalChecked());
}

NODE_MODULE(addon, InitAll)
