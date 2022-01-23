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
#include "sleep_displays.h" // NOLINT(build/include)
#include <windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")

// using std::endl;
// using std::string;

// Simple synchronous access to the `sleepDisplays()` function
NAN_METHOD(sleepDisplays) {
  // expect a number as the first argument
  int points = Nan::To<int>(info[0]).FromJust();
 
  // int fResult = GetSystemMetrics(SM_CMONITORS);

  info.GetReturnValue().Set(points);
}