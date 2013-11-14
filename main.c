
#include "io430.h"
#include "display_joystick.h"
#include "edlib.h"

int main( void )
{
  
  // Timer
  int sec = 300;
  
  initialize();
  
  timerDownCount(sec);
  
  // Fast-Writer
  /*
  if() {
    waitOneMillisecond();
    sec++;
  }
  
  if() {
    waitMilliseconds(400);
    sec++;
  }
  
  if() {
    waitMilliseconds(400);
    sec++;
  }*/
  
  return 0;
  
}
