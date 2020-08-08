                                                                         //Aarzoo islam's programming

#include <Servo.h>

Servo myservo;

int pos = 0;

int PIR = 7;

void setup() {
  
  Serial.begin(9600);
  Serial.println();
 
  
  
  myservo.attach(9);
  
  myservo.write(0);
  
  pinMode(PIR, INPUT);
  
}
void loop() {
  
  int value = digitalRead(PIR);
  
  if(value == HIGH) {
    
    myservo.write(30);

    
    delay(4000);
    
  }
  
  else {
    
    myservo.write(0);
    
  }
  
}
