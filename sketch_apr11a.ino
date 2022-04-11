
#define ENA = 9;
#define ENB = 10;

#define IN1 = 4;
#define IN2 = 5;
#define IN3 = 6;
#define IN4 = 7;

uint8_t VEL = 128;

void setup() {
  // put your setup code here, to run once:
  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  MotoresFrente();
  delay(1000);
  MotoresParar();
  delay(1000);
}


void MotoresFrente(){
  analogWrite(ENA,VEL);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  analogWrite(ENB,VEL);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}
void MotoresParar(){
  analogWrite(ENA,0);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  analogWrite(ENB,0);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,LOW);
}

void MotoresDireita(){
  analogWrite(ENA,VEL);
  digitalWrite(IN1,HIGH);
  digitalWrite(IN2,LOW);

  analogWrite(ENB,0);
  digitalWrite(IN3,LOW);
  digitalWrite(IN4,LOW);
}
void MotoresEsquerda(){
  analogWrite(ENA,0);
  digitalWrite(IN1,LOW);
  digitalWrite(IN2,LOW);

  analogWrite(ENB,VEL);
  digitalWrite(IN3,HIGH);
  digitalWrite(IN4,HIGH);
}
