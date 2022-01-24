var addon = require('./build/Release/addon');

function run() {
  
  var NumberOfDisplay = addon.enumerateDisplays();
  console.log('Number Of Display:', NumberOfDisplay);

  // to check last last input time i have run the code after 5 sec toget result 5
  // after running code please don't move mouse or press any key to get proper result.
  setTimeout(() => {
    var lastInputInfo = addon.lastInputInfo();
    console.log('last Input Info:', lastInputInfo);
    
  }, 5000);

  setTimeout(() => {
    addon.sleepDisplays();
    console.log('Displays sleeped');
    
  }, 6000);


  setTimeout(() => {
    addon.wakeDisplays();
    console.log('Displays waked up:');
    
  }, 8000);
  
}

run();