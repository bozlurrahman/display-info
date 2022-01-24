/*********************************************************************
 * NAN - Native Abstractions for Node.js
 *
 * Copyright (c) 2018 NAN contributors
 *
 * MIT License <https://github.com/nodejs/nan/blob/master/LICENSE.md>
 ********************************************************************/

var addon = require('./build/Release/addon');
var calculations = process.argv[2] || 100000000;

function run() {
  // var result = addon.enumerateDisplays();
  var NumberOfDisplay = addon.enumerateDisplays(calculations);
  console.log('Number Of Display:', NumberOfDisplay);

  // to check last last input time i have run the code after 5 sec toget result 5
  // after running code please don't move mouse or press any key to get proper result.
  setTimeout(() => {
    var lastInputInfo = addon.lastInputInfo();
    console.log('last Input Info:', lastInputInfo);
    
  }, 2000);

  setTimeout(() => {
    var sleepDisplays = addon.sleepDisplays();
    console.log('sleepDisplays:', sleepDisplays);
    
  }, 3000);


  setTimeout(() => {
    var wakeDisplays = addon.wakeDisplays();
    console.log('wakeDisplays:', wakeDisplays);
    
  }, 8000);
  
}

run();