/*********************************************************************
 * NAN - Native Abstractions for Node.js
 *
 * Copyright (c) 2018 NAN contributors
 *
 * MIT License <https://github.com/nodejs/nan/blob/master/LICENSE.md>
 ********************************************************************/
// #include <iostream>
#include <cstdlib>
#include "enumerate_displays.h" // NOLINT(build/include)
#include <windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")

// using std::endl;
// using std::string;
int enumerateDisplays(int points)
{
  int fResult;
  fResult = GetSystemMetrics(SM_CMONITORS);
  return fResult;
}
