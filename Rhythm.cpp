#import "WProgram.h"
#import "Rhythm.h"

Rhythm::Rhythm() {
  reset();
}

void Rhythm::tap() {
  _totalCount ++;
  _totalSum += _loopCount;
  
  _loopCount = 0;
  currentTiming = _totalSum / _totalCount;
}

void Rhythm::reset() {
  _loopCount    = 0;
  _totalSum     = 0;
  _totalCount   = 0;
  currentTiming = 0;
}

void Rhythm::loop() {
  _loopCount ++;
}
