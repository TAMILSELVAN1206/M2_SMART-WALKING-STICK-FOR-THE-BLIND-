#include <Servo.h>
**
 * @file Smart walking stick
 * @author Tamilselvan R P (tamilselvan.18ece@sonatech.ac.in)
 * @brief Smart walking  stick for the blind
 * @version 0.1
 * @date 2022-04-22
 * 
 * @copyright Copyright (c) 2022
 * 
 */

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