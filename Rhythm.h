#ifndef _hRhythm
#define _hRhythm

  #import "WProgram.h"

  class Rhythm
  {
    public:
      Rhythm();
      void tap();
      void reset();
      void loop();
      int currentTiming;
    private:
      unsigned long _loopCount;
      unsigned long _totalSum;
      unsigned  int _totalCount;
  };

#endif
