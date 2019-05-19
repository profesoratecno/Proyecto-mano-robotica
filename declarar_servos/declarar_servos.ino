#include <Servo.h>

int servoPins[] = {2, 3, 4, 5, 6};

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  for (int i = 0; i < 5; i++) { 
    Servo myservo[i];
    pinMode(servoPins[i], OUTPUT);
    myservo[i].attach(servoPins[i]);
    Serial.print ("Definir myservo");
    Serial.print(i);
    Serial.print(" en salida "); 
    Serial.println(servoPins[i]);
  }
  }

  



  
