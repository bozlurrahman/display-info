#include <nan.h>
#include "enumerate_displays.h"
#include <windows.h>
#pragma comment(lib, "user32.lib")

NAN_METHOD(enumerateDisplays) {
  int fResult = GetSystemMetrics(SM_CMONITORS);

  info.GetReturnValue().Set(fResult);
}