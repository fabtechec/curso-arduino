int piezoPin = A0;
int motorPin = 13;
int valorPiezo = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(motorPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valorPiezo = analogRead(A0);
  Serial.println(valorPiezo); 
  valorPiezo = map(valorPiezo,300,1023,0,255);
  analogWrite(motorPin,valorPiezo);
}
