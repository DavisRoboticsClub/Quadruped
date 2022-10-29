#include <Servo.h>   
Servo testServo; 
void setup() {
  testServo.attach(8);
  

}

void loop() {
  // put your main code here, to run repeatedly:
testServo.write(0);
delay(1000);
testServo.write(180);
delay(1000);
}
