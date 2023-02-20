
#include <Servo.h>

int SERVO_PIN = 2;
// Speed values in the range [0, 180]. 0 is full speed in reverse,
// 90 is neutral, and 180 is full speed forward.
int FORWARD = 180;
int NEUTRAL = 90;
int REVERSE = 0;
Servo myservo; 

void setup() {
  // put your setup code here, to run once:
  myservo.attach(2);
  // Servo is stationary.
  myservo.write(NEUTRAL);

}

void loop() {

  
  // put your main code here, to run repeatedly:
  myservo.write(FORWARD);
  delay(1000);
  // Servo is stationary for 1 second.
  myservo.write(NEUTRAL);
  delay(1000);
  // Servo spins in reverse at full speed for 1 second.
  myservo.write(REVERSE);
  delay(1000);
  // Servo is stationary for 1 second.
  myservo.write(NEUTRAL);
  delay(1000);

  
/*
  for(int i = 0; i <= 180; i++){
    myservo.write(i);
  }
  delay(5000);

  for(int i = 180; i >= 0; i--){
    myservo.write(i);
  }
*/


}
