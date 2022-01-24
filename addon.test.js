var addon = require('./build/Release/addon');

test('test should be success if display is one', () => {

  var NumberOfDisplay = addon.enumerateDisplays();
  expect(NumberOfDisplay).toBe(1);
});

test('last input time should be greater than 5sec if the pc not take any input', () => {

  setTimeout(() => {
    var lastInputInfo = addon.lastInputInfo();
    expect(lastInputInfo).toBeGreaterThan(5);
    
  }, 5000);
  
});

