                                                                                     //Aarzoo's programming
//Connections:

//The HC-SR04 Ultrasonic Module has 4 pins, Ground, VCC, Trig and Echo. The Ground and the VCC pins of the module needs to be connected to the Ground and the 5 volts pins on the Arduino Board respectively and the trig and echo pins to any Digital I/O pin on the Arduino Board.
//The HC-SR04 sensor attach to the Breadboard
//The Sensor VCC connect to the Arduino Board +5V
//The Sensor GND connect to the Arduino Board GND
//The Sensor Trig connect to the Arduino Board Digital I/O 9
//The Sensor Echo connect to the Arduino Board Digital I/O 10

//Buzzer and LED

//The Buzzer attach to the Breadboard
//The Buzzer long leg (+) connect to the Arduino Board Digital 11
//The Buzzer short leg (-) connect to the Arduino Board GND
//The LED attach to the Breadboard
//The Resistor connect to the LED long leg (+)
//The Resistor other leg (from LED’s long leg) connect to the Arduino Board Digital 13
//The LED short leg (-) connect to the Arduino Board GND


// defines pins numbers
const int trigPin = 9;
const int echoPin = 10;
const int buzzer = 11;
const int ledPin = 13;
 
// defines variables
long duration;
int distance;
int safetyDistance;
 
 
void setup() {
pinMode(trigPin, OUTPUT); // Sets the trigPin as an Output
pinMode(echoPin, INPUT); // Sets the echoPin as an Input
pinMode(buzzer, OUTPUT);
pinMode(ledPin, OUTPUT);
Serial.begin(9600); // Starts the serial communication
}
 
 
void loop() {
// Clears the trigPin
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
 
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
 
// Reads the echoPin, returns the sound wave travel time in microseconds
duration = pulseIn(echoPin, HIGH);
 
// Calculating the distance
distance= duration*0.034/2;
 
safetyDistance = distance;
if (safetyDistance <= 50){        // main programing a 5 chilo...kothai object ta ale bazzar ta bajbe...
  digitalWrite(buzzer, HIGH);   
  digitalWrite(ledPin, HIGH);
}
else{
  digitalWrite(buzzer, LOW);
  digitalWrite(ledPin, LOW);
}
 
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
}
