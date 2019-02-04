//#include <Servo.h>

 
#include <SoftwareServo.h> 
SoftwareServo myservo;                      // creates name “my servo” as object to control a servo 
int pos = 0;                                // variable to store the servo position 
 
void setup() 
{ 
  myservo.attach(0);                        // attaches the servo on pin 0 to the servo object 
} 
 
void loop() 
{ 
  for(pos = 0; pos <= 180; pos += 1)        // goes from 0 degrees to 180 degrees 
  {                                         // in steps of 1 degree 
    myservo.write(pos);                     // tell servo to go to position in variable 'pos' 
    delay(15);                              // waits 15 milliseconds for the servo to reach the position
    SoftwareServo::refresh();               // required by SoftwareServo Library to sweep correctly
  }           
  delay (20);                               // required by SoftwareServo Library to sweep correctly
  for(pos = 180; pos>=0; pos-=1)            // goes from 180 degrees to 0 degrees 
  {                                
    myservo.write(pos);                     // tell servo to go to position in variable 'pos' 
    delay(15);                              // waits 15 milliseconds for the servo to reach the position 
    SoftwareServo::refresh();               // required by SoftwareServo Library to sweep correctly
  }
  delay(20);                                // required by SoftwareServo Library to sweep correctly
}
