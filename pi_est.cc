/*********************************************************************
 * NAN - Native Abstractions for Node.js
 *
 * Copyright (c) 2018 NAN contributors
 *
 * MIT License <https://github.com/nodejs/nan/blob/master/LICENSE.md>
 ********************************************************************/
#include <iostream>
#include <cstdlib>
#include "pi_est.h"  // NOLINT(build/include)
#include <windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")

using std::endl;
using std::string;

inline int randall(unsigned int *p_seed) {
// windows has thread safe rand()
#ifdef _WIN32
  return rand();  // NOLINT(runtime/threadsafe_fn)
#else
  return rand_r(p_seed);
#endif
}

double Estimate (int points) {
  int i = points;
  int inside = 0;
  unsigned int randseed = 1;

#ifdef _WIN32
  srand(randseed);
#endif

  // unique seed for each run, for threaded use
  unsigned int seed = randall(&randseed);

#ifdef _WIN32
  srand(seed);
#endif

  while (i-- > 0) {
    double x = randall(&seed) / static_cast<double>(RAND_MAX);
    double y = randall(&seed) / static_cast<double>(RAND_MAX);

    // x & y and now values between 0 and 1
    // now do a pythagorean diagonal calculation
    // `1` represents our 1/4 circle
    if ((x * x) + (y * y) <= 1)
      inside++;
  }

  // calculate ratio and multiply by 4 for π
  return (inside / static_cast<double>(points)) * 4;
}

std::string mouseChecker()
{
   BOOL fResult;
   int aMouseInfo[3];
 
   fResult = GetSystemMetrics(SM_MOUSEPRESENT); 
 
   if (fResult == 0) 
      return "No mouse installed.\n"; 
   else 
   { 

     string output = "Mouse installed.\n";

      // Determine whether the buttons are swapped. 

      fResult = GetSystemMetrics(SM_SWAPBUTTON); 
 
      if (fResult == 0) 
         output += "Buttons not swapped.\n"; 
      else 
         output += "Buttons swapped.\n"; 
 
      // Get the mouse speed and the threshold values. 
 
      fResult = SystemParametersInfo(
         SPI_GETMOUSE,  // get mouse information 
         0,             // not used 
         &aMouseInfo,   // holds mouse information 
         0);            // not used 

      // if( fResult )
      // { 
      //    printf("Speed: %d\n", aMouseInfo[2]); 
      //    printf("Threshold (x,y): %d,%d\n", 
      //       aMouseInfo[0], aMouseInfo[1]); 
      // }

      return output;
   } 
}
