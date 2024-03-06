#include <Arduino.h>
#include <Servo.h>
#include <ALKS.h>


static const int servo1Pin = S1;    //deklarace pinů
static const int servo2Pin = S2;
static const int servo3Pin = S3;
static const int servo4Pin = S4;

Servo servo1, servo2, servo3, servo4;   // deklarace serv



void setup() {
    Serial.begin(115200);            // nastavení frekvence, se kterou se bude ALKS bavit s počítačem
    servo1.attach(servo1Pin);        // nastavení který pin, patří ke kterému servu
    servo2.attach(servo2Pin);
    servo3.attach(servo3Pin);
    servo4.attach(servo4Pin);
}



void loop(){
   
   for(int posDegrees = 0; posDegrees <= 80; posDegrees++) {        // Deklarace proměné i, která začne jako nula a poroste o 1
        servo1.write(posDegrees);              //   Posunutí serva na požadovaný úhel
        Serial.println(posDegrees);            // vypíše kam se servo pusune
        delay(50);           // Pauza 50 ms
    }
    // výsledek je, že se servo postupně posune z 0 stupňů na 90 stupňů


    for(int posDegrees = 80; posDegrees >= 0; posDegrees--) {       // servo se posune zpět na 0 stupňů
        servo1.write(posDegrees);
        Serial.println(posDegrees);
        delay(50);
    }    

}