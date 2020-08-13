                                                                                  //Aarzoo's programming

//app.. bluetooth control arduino all in one

String voice;
#include<Servo.h>
int pos= 0;
Servo myone;
Servo mytwo;
void setup (){
 myone.attach(9); // right servo
 mytwo.attach(10); // left servo
 Serial.begin(9600);
}
void loop ()
{
  if (Serial.available())
  {
  String voice = Serial.readString();
  Serial.println(voice);

 if(voice=="grab")
   {
myone.write(180);
mytwo.write(10);
   }
if (voice=="release")
  {
myone.write(0);
mytwo.write(180);
  }
  }
}
