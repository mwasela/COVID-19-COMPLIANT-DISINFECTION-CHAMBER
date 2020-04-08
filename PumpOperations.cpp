
//This snippet shows how the pump is operated
//Disinfection Chamber

void pumpOps();
int pumpPin = 11;

void setup(){
	
	PINMODE(pumpPin, OUTPUT);

}


void loop(){

	pumpOps();

}


void pumpOps(){

	digitalWrite(pumpPin, HIGH);   //TURNS THE PUMP ON FOR 5 SECONDS
	delay(5000);
	digitalWrite(pumpPin, LOW);    //THEN TURNS IT BACK OFF AFTER DISINFECTION

}
