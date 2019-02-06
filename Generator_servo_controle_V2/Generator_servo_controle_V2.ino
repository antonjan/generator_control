#include <SoftRcPulseOut.h>
SoftRcPulseOut servo; 
#define REFRESH_PERIOD_MS 20
#define NOW   
                    // creates name “my servo” as object to control a servo 
int pos = 0;                                // variable to store the servo position 
const int buttonPin = 4;     // the number of the pushbutton pin
const int ledPin =  5; 
const int servoMoter = 0;
int buttonState = 0;  


void setup() 
{ 
pinMode(ledPin, OUTPUT);  
pinMode(buttonPin, INPUT);
pinMode(servoMoter, OUTPUT); 
servo.attach(0);
servo.setMaximumPulse(2200); 

  servo.attach(0);                        // attaches the servo on pin 0 to the servo object 
  
  // turn LED on:
    digitalWrite(ledPin, HIGH);

  //for(pos = 0; pos <= 180; pos += 1)        // goes from 0 degrees to 180 degrees 
  //Enable chock
  digitalWrite(ledPin, HIGH);  //switch on led
  pos =0;
  //for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
    {                                  // in steps of 1 degree 
      servo.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(REFRESH_PERIOD_MS);        // waits 20ms for refresh period 
      SoftRcPulseOut::refresh(NOW);    // generates the servo pulse Now
    } 
    delay (1000);
    //for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
    pos = 180;
    {                                
      servo.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(REFRESH_PERIOD_MS);        // waits 20ms for for refresh period 
      SoftRcPulseOut::refresh(NOW);    // generates the servo pulse Now
    } 

  digitalWrite(ledPin, LOW);  //switch off LED
}
void loop() 
{ 
if (buttonState == HIGH) {
    // turn LED on:
  digitalWrite(ledPin, HIGH);  //switch on led
  pos =0;
  //for(pos = 0; pos < 180; pos += 1)  // goes from 0 degrees to 180 degrees 
    {                                  // in steps of 1 degree 
      servo.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(REFRESH_PERIOD_MS);        // waits 20ms for refresh period 
      SoftRcPulseOut::refresh(NOW);    // generates the servo pulse Now
    } 
    delay (1000);
    //for(pos = 180; pos>=1; pos-=1)     // goes from 180 degrees to 0 degrees 
    pos = 180;
    {                                
      servo.write(pos);              // tell servo to go to position in variable 'pos' 
      delay(REFRESH_PERIOD_MS);        // waits 20ms for for refresh period 
      SoftRcPulseOut::refresh(NOW);    // generates the servo pulse Now
    } 
  digitalWrite(ledPin, LOW);  //switch off LED
  
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
