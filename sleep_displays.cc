
#include <nan.h>
#include "sleep_displays.h" // NOLINT(build/include)
#include <windows.h>
#pragma comment(lib, "user32.lib")

NAN_METHOD(sleepDisplays) {
  
  SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM) 2);

  // info.GetReturnValue().Set(1);
}