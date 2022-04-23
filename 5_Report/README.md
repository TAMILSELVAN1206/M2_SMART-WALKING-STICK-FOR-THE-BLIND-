# **SMART WALKING STICK**

## Introduction:

The project describes ultrasonic blind walking stick with the use of Arduino. According to World Health Organization (WHO), 30 million people are permanently blind and 2.85 million people with vision impairment. If you notice them, you can very well know about it they can’t walk without the help of other. One has to ask guidance to reach their destination. They have to face more struggles in their life daily life. Using this blind stick, a person can walk more confidently. This stick detects the object in front of the person and give response to the user either by vibrating or through command. So, the person can walk without any fear. This device will be best solution to overcome their difficulties. We are going to upgrade the project by increasing its application. In this project, we are going to use two ultrasonic sensors. So now, this smart stick will have an ultrasonic sensor to sense distance from any obstacle and a RF remote using which the blind man could remotely locate his stick.

## objective:

The main objective of this project is to help blind people to walk with ease and to be warned whenever their walking path is obstructed with other objects, people or other similar odds. As a warning signal, a buzzer is connected in the circuit, whose frequency of beep changes according to the distance of object. The closer the distance of obstruction, the more will be the buzzer beep frequency. We can say that the beep frequency is inversely proportional to the distance.



## COMPONENTS:
1. ATMEGA-328
2. ULTRASONIC SENSOR
3. BUZZER
4. SERVO MOTOR

## 1. ATMEGA MICROCONTROLLER:

The Atmel 8-bit AVR RISC-based microcontroller combines 32 KB ISP flash memory with read-while-write capabilities, 1 KB EEPROM, 2 KB SRAM, 23 general-purpose I/O lines, 32 general-purpose working registers, 3 flexible timer/counters with compare modes, internal and external interrupts, serial programmable USART, a byte-oriented 2-wire serial interface, SPI serial port, 6-channel 10-bit A/D converter (8 channels in TQFP and QFN/MLF packages), programmable watchdog timer with internal oscillator, and 5 software-selectable power-saving modes.

## 2. ULTRASONIC SENSOR:

An ultrasonic sensor is an instrument that measures the distance to an object using ultrasonic sound waves. An ultrasonic sensor uses a transducer to send and receive ultrasonic pulses that relay back information about an object’s proximity.
High-frequency sound waves reflect from boundaries to produce distinct echo patterns.

## 3. Buzzer:
The buzzer produces an alarm tone. The piezoelectric material in the buzzer when subjected to alternating current expands and contracts rhythmically following the current thus, emitting an alarm tone. 

## 4. Servo motor:
A servo motor is a DC motor that vibrates when it receives a signal. It comes in a compact size and alerts the user. In this project, we can use a vibration motor in case the user misses the buzzer alert. 

## Advantages:
•	It will save the old man from any type of obstacles.
•	It will be very helpful to blind people.
•	We can also fit a GPRS chip into this if we require it, it will help us to find the     exact location of the old person.
•	It will help to find the direction of the walk of the blind person.
•	It also has a night light for a clear view of the street.

## Disadvantages:

Everything has two aspects in the form of pros and cons. Walking canes are not an exception to this. There are some disadvantages of these walking aids too. A walking cane gets stuck at cracks of the pavement or provides less support if you are riding anywhere. Repetitive strain injury may get place, after regular use of a cane. Before purchasing the right cane, it is important to keep your health condition and the body in mind.


## HIGH LEVEL REQUIREMENTS:

|RID|DESCRIPTION|STATUS|
|:--|:----------|:-----|
|HLR1|ULTRASONIC SENSOR  INTERFACING|IMPLEMENTED|
|HLR2|SERVO MOTOR INTERFCING|IMPLEMENTED|

## LOW LEVEL REQUIREMENTS:

|RID|DESCRIPTION|STATUS|
|:--|:----------|:-----|
|LLR1|ATMEGA INTERFACING WITH SERVO MOTOR|IMPLEMENTED|
|LLR2|SERVO MOTOR INTERFACING WITH LEDS|IMPLEMENTED|
|LLR3|BUZZER INTERFACING WITH ATMEGA328|IMPLEMENTED|

## CONCLUSION: 

It is worth mentioning at this point that the aim of this study which is the design and implementation of a smart walking stick for the blind has been fully achieved. The Smart Stick acts as a basic platform for the coming generation of more aiding devices to help the visually impaired to navigate safely both indoor and outdoor. It is effective and affordable. In a developing country like India, there is a need for a cost-effective solution so that most of the people can have an effective product as proposed in this paper.

