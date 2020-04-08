//DISINFECTION CHAMBER PROJECT
//Touchless body temprature reading using the MLX90614 Thermal IR Temp reader



#include <Wire.h>
#include "Adafruit_MLX90614.h"


Adafruit_MLX90614 modIrTemp = Adafruit_MLX90614();
int Otemp = 0;
int Atemp = 0; 

void setup() {
  //pinMode(8,OUTPUT);        //the following two lines enable power supply 3.3V on UEXT connector
 // digitalWrite(8,LOW);      //you do not need them if you use wire jumpers
  modIrTemp.begin();  
  Serial.begin(115200);
}

void loop() {

  Atemp = modIrTemp.readAmbientTempC();        //Read ambient temprature
  Otemp = modIrTemp.readObjectTempC();         //Read object surface temprature
   
  delay(1000); 								   // can adjust this for faster/slower updates
}