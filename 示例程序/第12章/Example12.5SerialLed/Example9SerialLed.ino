char comdata;       //定义变量，用于存放串口读取的数据
int LED=13;            //定义数字口13为led的控制引脚
void setup() {
  Serial.begin(9600);         //初始化串口波特率为9600
  pinMode(LED,OUTPUT);         // 将led控制引脚设置为输出
}

void loop() 
{
  if(Serial.available() > 0)   //不断检测串口缓冲区是否有数据
  {
        comdata=Serial.read();   //从串口缓冲区读取一个字节的数据
        if(comdata == '1')
          {
             digitalWrite(LED,LOW);  //关闭led灯
           }
      
         if(comdata =='2')
         {
                digitalWrite(LED,HIGH);  //打开led灯
          }    
    }  
 }
