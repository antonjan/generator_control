#include <SoftRcPulseOut.h>

SoftRcPulseOut servo;
int pos = 0;
#define REFRESH_PERIOD_MS 20
#define NOW               1

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  //pinMode(0, INPUT); // switch
  pinMode(0, OUTPUT); // servo pulse and green LED
  //pinMode(2, INPUT); // potmeter
  servo.attach(0);
  servo.setMaximumPulse(2200);  
}

// the loop routine runs over and over again forever:
void loop() {
  
    for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
    {                                  // in steps of 1 degree 
      servo.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(REFRESH_PERIOD_MS);        // waits 20ms for refresh period 
      SoftRcPulseOut::refresh(NOW);    // generates the servo pulse Now
    } 
    delay (20); 
    for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
    {                                
      servo.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(REFRESH_PERIOD_MS);        // waits 20ms for for refresh period 
      SoftRcPulseOut::refresh(NOW);    // generates the servo pulse Now
    } 
    delay (20); 
  }
