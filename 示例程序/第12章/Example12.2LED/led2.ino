  byte Led=13;
  byte Button=2;
  byte I=0;
void setup() {
  // put your setup code here, to run once:
pinMode(Led,OUTPUT);
pinMode(Button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
I=digitalRead(Button);
if(I==0)
{
  digitalWrite(Led,HIGH);
  }else
  digitalWrite(Led,LOW);
}
