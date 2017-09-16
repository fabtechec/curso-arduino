int PiezoPin = A0;
int MotorPin = 13;
int inputPiezo = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(MotorPin,OUTPUT);
  pinMode(PiezoPin,INPUT)
}

void loop() {
  // put your main code here, to run repeatedly:
  inputPiezo = analogRead(PiezoPin);
  Serial.println(inputPiezo); 
  if(inputPiezo > 0){
    digitalWrite(MotorPin,HIGH);
  }else{
    digitalWrite(MotorPin,LOW);
  }
  delay(100);
}
