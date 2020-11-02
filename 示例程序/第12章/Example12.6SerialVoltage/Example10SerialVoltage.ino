int SensorValue=0;
float float_SensorValue;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  SensorValue=analogRead(A0);
  float_SensorValue=(float)SensorValue/1023*5.00;
  Serial.print("55");
  Serial.print(float_SensorValue,2);
}
