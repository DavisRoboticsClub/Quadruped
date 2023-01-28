#include <Servo.h>

Servo FLBR; 
Servo FRBL;


void setup() {
  FLBR.attach(9);  // attaches the servo on pin 9 to the servo object
  FRBL.attach(10);
  FLBR.write(90);              // tell servo to go to position in variable 'pos'
  FRBL.write(90);              // tell servo to go to position in variable 'pos'
  delay(3000);
}

void loop() {
    delay(1000);
    FLBR.write(135);              // tell servo to go to position in variable 'pos'
    FRBL.write(135);              // tell servo to go to position in variable 'pos'
    delay(1000);
    FLBR.write(45);              // tell servo to go to position in variable 'pos'
    FRBL.write(45);              // tell servo to go to position in variable 'pos'
}
