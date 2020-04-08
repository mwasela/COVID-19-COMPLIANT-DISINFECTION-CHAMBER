//DISINFECTION CHAMBER PROJECT
//GSM SEND SMS CODE
//WILL SEND TEMP VALUES TO REMOTE SERVER VIA SMS
//USING GSM800L




#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10);

void setup()
{
  mySerial.begin(9600);   // Setting the baud rate of GSM Module  
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  delay(100);
}


void loop()
{
  if (Serial.available()>0)
   switch(Serial.read())
  {
    case 's':
      SendMessage();
      break;
    case 'r':
      RecieveMessage();
      break;
  }

 if (mySerial.available()>0)
   Serial.write(mySerial.read());
}


 void SendMessage()
{
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  
  mySerial.println("AT+CMGS=\"+254xxxxxxxxxx\"\r"); // mobile number
  delay(1000);
  mySerial.println(temp());// The SMS text containing temp value to be sent
  delay(100);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}

/*
 void RecieveMessage()
{
  mySerial.println("AT+CNMI=2,2,0,0,0"); // AT Command to receive a live SMS
  delay(1000);
 }

 */ 

//wE CAN CREATE A SENT AND RECIEVED CHECK FUNCTION TO SIMULATE AN
//ACK RESPONSE FOR THE TEXT