int SensorPin=A0;
byte Led=3;
int SensorValue=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(Led,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
   SensorValue=analogRead(SensorPin);
   analogWrite(Led,SensorValue/4);
}

