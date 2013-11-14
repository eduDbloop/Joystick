#include "io430.h"
#include "display_joystick.h"

void timerDownCount(unsigned int sec) {

  // Joystick Variables
  int x=0,y=0;   
 
  // CountDown
  while(true) {
  
    x = readAnalog(0); 
    y = readAnalog(1);
      
    //while(sec != 0){ 
    showTime(sec/60,sec % 60);
    waitMilliseconds(1000);
    sec--;    
    // }    
      
    // +Minute 
      
    if( x < 500 && y > 600 && sec <= 6000) {
      sec = sec + 60;
    }
      
    // -Minute
      
    if( x < 500 && y < 500 && sec <= 6000) {
      sec = sec - 60;
    }
      
    // +Seconds
    
    if( x > 600 && y > 600 && sec <= 6000) {
      sec = sec + 2;
    }
    
    // -Seconds
      
    if( x > 600 && y < 500 && sec <= 6000) {
      sec = sec - 2;
    }
     
  }

  void displayJoystickPosition(void) {  
    
    while(true) {
      writeNumber(readAnalog(0));
      waitMilliseconds(500);
      writeNumber(readAnalog(1));
    }
  }
}
