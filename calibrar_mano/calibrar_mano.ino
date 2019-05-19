#include <Servo.h>


byte dato;
Servo myservo0, myservo1;

void setup() {
  Serial.begin(9600);
  myservo0.attach(9);
  myservo1.attach(10);
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
          myservo1.detach();
          delay(100);
          myservo0.write(125);
          delay(1000);
        }
        break;
      case 66: //B Pulgar OFF
        { 
          myservo1.detach();
          delay(100);
          myservo0.write(45);
          delay(1000);
        }
        break;
      case 67: //A Indice ON
        { myservo0.detach();
          delay(500);
          myservo1.write(125);
          delay(1000);
        }
        break;
      case 68: //B Indice OFF
        { myservo0.detach();
          delay(500);
          myservo1.write(45);
          delay(1000);
        }
        break;
    }
  
}
