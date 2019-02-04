

const int motor_izquierdo = 9;
const int motor_derecho = 10;
const int value = 250;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motor_izquierdo, OUTPUT);
  pinMode(motor_derecho, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(motor_derecho, HIGH);
  delay(1000);
  digitalWrite(motor_derecho, LOW);
  delay(1000);
  digitalWrite(motor_izquierdo, HIGH);
  delay(1000);
  digitalWrite(motor_izquierdo, LOW);
  delay(1000);

  digitalWrite(motor_derecho, HIGH);
  digitalWrite(motor_izquierdo, HIGH);
  delay(1000);
  digitalWrite(motor_derecho, LOW);
  digitalWrite(motor_izquierdo, LOW);
  delay(100);
  
}
