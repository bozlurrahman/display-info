#include <nan.h>
#include "wake_displays.h"
#include <windows.h>
#pragma comment(lib, "user32.lib")

NAN_METHOD(wakeDisplays) {
  
  // wake up displays command by windows api
  SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) -1);

  // info.GetReturnValue().Set(1);
}