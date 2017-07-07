int motorASpd = 3;
int motorADir = 12;
int motorABrk = 9;

int motorBSpd = 11;
int motorBDir = 13;
int motorBBrk = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motorADir, OUTPUT); //motor A direction
  pinMode(motorASpd, OUTPUT); //motor A speed
  pinMode(motorABrk, OUTPUT); //motor A brake
  
  pinMode(motorBDir, OUTPUT); //motor B direction
  pinMode(motorBSpd, OUTPUT); //motor B speed
  pinMode(motorBBrk, OUTPUT); //motor B brake
}

void loop() {
  // put your main code here, to run repeatedly:
int rotationSpd;

  if(Serial.available() > 0) {
    rotationSpd = Serial.parseInt();
    analogWrite(motorASpd, rotationSpd);
    analogWrite(motorBSpd, rotationSpd);
  }

  digitalWrite(motorADir, HIGH);
  digitalWrite(motorBDir, HIGH);
}
