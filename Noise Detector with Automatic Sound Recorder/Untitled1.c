int senpin=A7;
int buzzer=12;
long val=0;
long average=0;
int threshold=66;

String answ;
#include<SoftwareSerial.h>
SoftwareSerial my serial(3,4);

void setup(){
    pinMode(senpin,INPUT);
    pinMode(buzzer,OUTPUT);
    Serial.begin(9600);
    mySerial.begin(9600);
}
