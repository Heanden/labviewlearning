void setup() {
  // put your setup code here, to run once:
  //初始化串口波特率为9600
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()) //判断串口缓冲区是否有数据
  {
    char c = Serial.read();//从串口缓冲区读取一个字节的数据
    char f=c+1;            //对读取的数据进行加1         
    Serial.write(f);       //对运算的结果通过串口发送出去  
    }
}
