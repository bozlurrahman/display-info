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
#include "last_input_info.h" // NOLINT(build/include)
#include <windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")

NAN_METHOD(lastInputInfo)
{
  LASTINPUTINFO li;
  li.cbSize = sizeof(LASTINPUTINFO);


  bool fResult = GetLastInputInfo(&li);

  float resul = ceil((GetTickCount() - li.dwTime) / 1000);

  info.GetReturnValue().Set(resul);
}
