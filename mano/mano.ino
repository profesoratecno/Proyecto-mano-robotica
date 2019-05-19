#include <Servo.h>

int servoPins[] = {2, 3, 4, 5, 6};

void setup() {
  Serial.begin(9600);
  for (int i = 0; i < 5; i++) {
    Servo myservo[i];
    pinMode(servoPins[i], OUTPUT);
    myservo[i].attach(servoPins[i]);
    Serial.print ("Definir sevo ");
    Serial.print(i);
    Serial.print("en entrada ");
    Serial.println(servoPins[i]);
  }
}

void loop() {

  if (Serial.available())
    //Guardamos en la variable dato el valor leido
    dato = Serial.read();
  //Comprobamos el dato
  switch (dato)
  { //Si recibimos una ...
    case 85: //ARRIBA
      { digitalWrite(ledArriba, HIGH);
        digitalWrite(ledAbajo, LOW);
        digitalWrite(ledDerecha, LOW);
        digitalWrite(ledIzquierda, LOW);
        digitalWrite(ledCentro, LOW);
        break;
      }
    case 68: //"U": ABAJO
      {
        ///// RELLENA EL CÓDIGO PARA ENCENDER EL LED CORRESPOND.
        break;
      }
    case 67: //"D": CENTRO
      {
        ///// RELLENA EL CÓDIGO PARA ENCENDER EL LED CORRESPOND.
        break;
      }
    case 76: //"L": IZQ
      {
        ///// RELLENA EL CÓDIGO PARA ENCENDER EL LED CORRESPOND.
        break;
      }
    case 82: //"R": DCH
      {
        ///// RELLENA EL CÓDIGO PARA ENCENDER EL LED CORRESPOND.
        break;
      }
    case 97: //Recibimos "a"
      { sentidoReloj();
        break;
      }
    case 98: //Recibimos "b"
      { sentidoContrario();
        break;
      }
    case 99: //Recibimos "c"
      { fueraDentro();
        break;
      }
  }




