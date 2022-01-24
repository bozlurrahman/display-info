/*********************************************************************
 * NAN - Native Abstractions for Node.js
 *
 * Copyright (c) 2018 NAN contributors
 *
 * MIT License <https://github.com/nodejs/nan/blob/master/LICENSE.md>
 ********************************************************************/
// #include <iostream>

#include <nan.h>
#include <cstdlib>
#include "wake_displays.h" // NOLINT(build/include)
#include <windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")

NAN_METHOD(wakeDisplays) {
  
  // wake up displays command by windows api
  SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) -1);

  info.GetReturnValue().Set(1);
}