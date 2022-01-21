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
  var result = addon.enumerateDisplays(calculations);
  console.log('result', result);
}

run();