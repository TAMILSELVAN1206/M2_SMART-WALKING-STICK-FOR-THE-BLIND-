#include <Servo.h>
Servo Myservo;
int pos;
const int trig=7;
const int echo=8;
const int buzzer=11;



void setup() 
{
  Myservo.attach(3);
pinMode(trig,OUTPUT);
pinMode(echo,INPUT);
Serial.begin(9600);
}

void loop()
{
digitalWrite(trig,LOW);
delayMicroseconds(2);
digitalWrite(trig,HIGH);
delayMicroseconds(10);
digitalWrite(trig,LOW);

int duration=pulseIn(echo,HIGH);
int distance=duration*(0.034/2);
Serial.println(distance);
if(distance < 15)
{
  tone(11,500,25);
  for(pos=0;pos<=180;pos++){
Myservo.write(pos);

}

}
else
{
  tone(11,0,25);  
 
}
}