#include <Servo.h>


byte dato;
Servo myservo0;
Servo myservo1;
Servo myservo2;
Servo myservo3;
Servo myservo4;

void setup() {
  Serial.begin(9600);
  myservo0.attach(7);
  myservo1.attach(9);
  myservo2.attach(4);
  myservo3.attach(5);
  myservo4.attach(10);
}

void loop() {
  if (Serial.available())
    //Guardamos en la variable dato el valor leido
    dato = Serial.read();
  //Comprobamos el dato
  switch (dato)
  { //Si recibimos una ...
    case 65: //A Pulgar ON
      {
        myservo0.write(125);
        delay(1000);
      }
      break;
    case 66: //B Pulgar OFF
      {
        myservo0.write(45);
        delay(1000);
      }
      break;
    case 67: //C Indice ON
      {
        myservo1.write(125);
        delay(1000);
      }
      break;
    case 68: //D Indice OFF
      {
        myservo1.write(45);
        delay(1000);
      }
      break;
    case 69: //E Corazón ON
      {
        myservo2.write(125);
        delay(1000);
      }
      break;
    case 70: //F Corazón OFF
      {
        myservo2.write(45);
        delay(1000);
      }
      break;
    case 71: //G Anular ON
      {
        myservo3.write(125);
        delay(1000);
      }
      break;
    case 72: //H Anular OFF
      {
        myservo3.write(45);
        delay(1000);
      }
      break;
    case 73: //I Anular ON
      {
        myservo4.write(125);
        delay(1000);
      }
      break;
    case 74: //J Anular OFF
      {
        myservo4.write(45);
        delay(1000);
      }
      break;
  }

}
