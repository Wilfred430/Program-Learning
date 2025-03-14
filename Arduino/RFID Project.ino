#include <SPI.h>
#include <MFRC522.h>

#define SDA_PIN 10   // RC522 SDA接腳連接到pin 10
#define RST_PIN 9   // RC522 RST接腳連接到pin 9
#define BUZZER 7     // 蜂鳴器接腳連接到pin 2
#define MotorA_1A 2
#define MotorA_1B 3
#define MotorB_1A 4
#define MotorB_1B 5
#define leftSpeed 220 //A
#define rightSpeed 230 //B
#define LleftSpeed 155 //A
#define LrightSpeed 160 //B
#define TimeDelay 10000

MFRC522 mfrc522(SDA_PIN, RST_PIN);

//特殊車輛
byte CardOne[4] = {0xE3, 0xBA, 0xFE, 0x28};  // 這裡設置有效的UID
byte CardTwo[4] = {0xB3, 0x36, 0x24, 0x29};
byte CardThree[4] = {0xA3, 0xA3, 0xD8, 0x26};
byte CardFour[4] = {0x83, 0x8E, 0xDD, 0x28};
byte CardFive[4] = {0x63, 0x3E, 0xE6, 0x28};

string preState="6";

//debounce
void setup() {
  Serial.begin(9600);  // 設定串列通訊速率為9600 baud
  SPI.begin();         // 初始化SPI通訊
  mfrc522.PCD_Init();  // 初始化MFRC522

  //控制蜂鳴器
  pinMode(BUZZER, OUTPUT);
  pinMode(MotorA_1A, OUTPUT);
  pinMode(MotorA_1B, OUTPUT);
  pinMode(MotorB_1A, OUTPUT);
  pinMode(MotorB_1B, OUTPUT);

  mfrc522.PCD_DumpVersionToSerial(); // 顯示讀卡設備的版本
}

void loop() {
  // 如果感應到新的卡片並讀取到卡片資料
  if (mfrc522.PICC_IsNewCardPresent() && mfrc522.PICC_ReadCardSerial()) 
  {
    // 將卡片的UID存入IDnow陣列中
    Serial.println("EE~");
    byte IDnow[4];
    for (int i = 0; i < 4; i++) {
      IDnow[i] = mfrc522.uid.uidByte[i];
    }

    if (isCardOne(IDnow))
    {
      preState = "1";
      digitalWrite(MotorA_1A,LOW);
      analogWrite(MotorA_1B,0);
      digitalWrite(MotorB_1A,LOW)
      analogWrite(MotorB_1B,0);
      Serial.println("右側注意改道");
      delay(TimeDelay);
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,leftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,rightSpeed);
      delay(500);
    }
    else if (isCardTwo(IDnow))
    {
      preState = "2";
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,LleftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,LrightSpeed);
    }
    else if (isCardThree(IDnow))
    {
      preState = "3";
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,LleftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,LrightSpeed);
    }
    else if (isCardFour(IDnow))
    {
      preState = "4";
      digitalWrite(MotorA_1A,LOW);
      analogWrite(MotorA_1B,0);
      digitalWrite(MotorB_1A,LOW)
      analogWrite(MotorB_1B,0);
      delay(TimeDelay);
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,LleftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,LrightSpeed);
    }
    else if (isCardFive(IDnow))
    {
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,LleftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,LrightSpeed);
      preState = "5";
    }

    //控制Buzzer:
    if (isCardFour(IDnow) || isCardFive(IDnow))
    {
      noTone(BUZZER);
      Serial.println("禁止開喇叭");
    }
  }else
  {
    //進場前
    if(preState == "6")
    {
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,leftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,rightSpeed);
    }else if(preState == "5") /*進場後*/
    {
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,LleftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,LrightSpeed);
    }else if(preState == "4")
    {
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,LleftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,LrightSpeed);
    }else if(preState == "3")
    {
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,LleftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,LrightSpeed);
    }else if(preState == "2")
    {
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,LleftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,LrightSpeed);
    }else if(preState == "1")
    {
      digitalWrite(MotorA_1A,HIGH);
      analogWrite(MotorA_1B,leftSpeed);
      digitalWrite(MotorB_1A,HIGH);
      analogWrite(MotorB_1B,rightSpeed);
      delay(1000);
      preState = "0";
    }else if(preState == "0")
    {
      digitalWrite(MotorA_1A,LOW);
      analogWrite(MotorA_1B,0);
      digitalWrite(MotorB_1A,LOW)
      analogWrite(MotorB_1B,0);
    }
    if(preState == "5" || preState == "4")
    {
      noTone(BUZZER);
      Serial.println("禁止開喇叭");
    }
  }
}

bool isCardOne(byte IDnow[4])
{
  for (int i = 0; i < 4; i++)
  {
    if (IDnow[i] != CardOne[i])
    {
      return false;
    }
  }
  return true;
}

bool isCardTwo(byte IDnow[4])
{
  for (int i = 0; i < 4; i++)
  {
    if (IDnow[i] != CardTwo[i])
    {
      return false;
    }
  }
  return true;
}

bool isCardThree(byte IDnow[4])
{
  for (int i = 0; i < 4; i++)
  {
    if (IDnow[i] != CardThree[i])
    {
      return false;
    }
  }
  return true;
}

bool isCardFour(byte IDnow[4])
{
  for (int i = 0; i < 4; i++)
  {
    if (IDnow[i] != CardFour[i])
    {
      return false;
    }
  }
  return true;
}

bool isCardFive(byte IDnow[4])
{
  for (int i = 0; i < 4; i++)
  {
    if (IDnow[i] != CardFive[i])
    {
      return false;
    }
  }
  return true;
}
