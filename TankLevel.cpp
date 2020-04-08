////DISINFECTION CHAMBER PROJECT
//Simple Code that displays dis8infection Tank level in Four Stages
//HIGH, MID, LOW, EMPTY
//uses an opamp gain transistor to drive an input current from the collector to digital pin 
//in arduino that'll be waiting for an interrupt signal




byte sensorPin[] = {8, 9, 10};

byte ledPin[] = {11, 12, 13}; // number of leds = numbers of sensors

const byte sensors = 3;

int level = 0;




void setup(){

	Serial.begin(9600);

	for(int i = 0; i < sensors; i++){

		pinMode(sensorPin[i], INPUT);

		pinMode(ledPin[i], OUTPUT);

	}
}



void loop(){

level = 0;

	for(int i = 0; i < sensors; i++){

		if(digitalRead(sensorPin[i]) == LOW){

			digitalWrite(ledPin[i], HIGH);

			level = sensors - i;

			}
			else{

				digitalWrite(ledPin[i], LOW);

				}

		}		

Serial.println("Water level");

switch(level){

			case 1:
			Serial.println("HIGH");
			break;


			case 2:
			Serial.println("AVERAGE");
			break;

			case 3:
			Serial.println("LOW");
			break;

			default:
			Serial.println("EMPTY");
			break;

			}

	delay(50);

}