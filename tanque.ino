#include <SoftwareSerial.h>
SoftwareSerial BT(4, 2); // RX, TX recorder que se cruzan


const int motor_izquierdo = 9;
const int motor_derecho = 10;
const int value = 250;


void setup()
{
  BT.begin(9600);       // Inicializamos el puerto serie BT que hemos creado
  Serial.begin(9600);   // Inicializamos  el puerto serie

  pinMode(motor_izquierdo, OUTPUT);
  pinMode(motor_derecho, OUTPUT);

  Serial.println("iniciando...");
}

void loop()
{
  if (BT.available())   // Si llega un dato por el puerto BT se envía al monitor serial
  {
    char option = BT.read();
    Serial.write(option);
    
    if (option == '0') {
      digitalWrite(motor_derecho, LOW);
      digitalWrite(motor_izquierdo, LOW);
    }

    if (option == '1') {
      Serial.println("uno");
      digitalWrite(motor_derecho, HIGH);
      digitalWrite(motor_izquierdo, HIGH);
    }
    if (option == '2') {
      digitalWrite(motor_derecho, LOW);
      digitalWrite(motor_izquierdo, HIGH);
    }
    if (option == '4') {
      digitalWrite(motor_derecho, HIGH);
      digitalWrite(motor_izquierdo, LOW);
    }


  }

  if (Serial.available()) // Si llega un dato por el monitor serial se envía al puerto BT
  {
    BT.write(Serial.read());
  }
}

