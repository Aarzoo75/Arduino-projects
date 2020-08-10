//we need a sd card module 

//GND pin of sd card module is attach with arduino's GND pin
//VCC pin of sd card module is attach with arduino's 5v pin
//MISO pin of sd card module  is attach with arduino's 12 pin
//MOSI pin of sd card module is attach with arduino's 11 pin
//SCK pin of sd card module is attach with arduino's 13 pin
//CS pin of sd card module is attach with arduinos's 4 pin

//vcc pin of amplifier is attach with arduino's 9 pin
//GND pin of amflifier is attach with arduino's GND pin

#include <SD.h>
#include <TMRpcm.h>
 #define SD_ChipSelectPin 4
TMRpcm tmrpcm;
void setup() {
  tmrpcm.speakerPin = 9;
  if (!SD.begin(SD_ChipSelectPin)) {
    return;
  }
  tmrpcm.setVolume(7);
  tmrpcm.play("4.wav");
}
void loop() {}
