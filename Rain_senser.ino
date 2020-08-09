                                                                             //Aarzoo's programming
//rain sensor vcc pin connect to arduino 5v 
//rain sensor gnd pin connect to arduino gnd
//rain sensor a0 pin vonnect to arduino a0 pin
//servo motor vcc pin connect to arduno 5v
//servo motor gnd pin connect to arduino gnd
//servo motor programming pin connect to arduino 3 pin

#include<Servo.h>
int rain_sensor = A0, servo = 3;
Servo myServo;
void setup()
{
  Serial.begin(9600);
  myServo.attach(servo);
  myServo.write(0);
  }
void loop()
{
  int sensorvalue=analogRead(rain_sensor);
  int motor = map(sensorvalue, 220,1023,180,0);
  myServo.write(motor);
  Serial.println("Sensor vlaue is  ");
  Serial.println(sensorvalue);
  Serial.println("Servo motor rotates by angle ");
  Serial.println(motor);
  delay(1000); 
  }
