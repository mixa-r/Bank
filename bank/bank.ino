#include <Servo.h>
int signaldown = 10;
int svet = 8;
int signalup = 12;
int inPin = 2;                   // пин для подключения датчика холла
int inPin1 = 3;                   // пин для подключения датчика холла
int outPin = 9;                   // пин для подключения светодиода
Servo servo1;

void setup()
{ 
  servo1.attach(11);   // Сервопривод сектор 1 пин 11
  servo1.write(80);     // Сервопривод сектор 1 положение 0
  pinMode(signalup, INPUT);
  pinMode(signaldown, INPUT);
  pinMode(inPin, INPUT);
  pinMode(inPin1, INPUT);
  pinMode(svet, INPUT);
  pinMode(outPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  
if( digitalRead(inPin) == LOW  && digitalRead(inPin1) == LOW ) // если кнопка тач и кнопка помада нажаты одновременно
{
    servo1.write(0); 
}
else
{
  servo1.write(80); 
}


if(digitalRead(svet) == HIGH ) // если кнопка тач и кнопка помада нажаты одновременно
{
    digitalWrite(outPin, HIGH);
    }
else
{
    digitalWrite(outPin, LOW);
}}

