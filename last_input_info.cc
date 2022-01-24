#include <nan.h>
#include "last_input_info.h"
#include <windows.h>
#pragma comment(lib, "user32.lib")

NAN_METHOD(lastInputInfo)
{
  LASTINPUTINFO li;
  li.cbSize = sizeof(LASTINPUTINFO);

  bool fResult = GetLastInputInfo(&li);

  float resul = ceil((GetTickCount() - li.dwTime) / 1000);

  info.GetReturnValue().Set(resul);
}
