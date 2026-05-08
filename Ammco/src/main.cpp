/*
#include <Arduino.h>

void setup() {

Serial.begin(115200);
pinMode(I0_0, INPUT);
pinMode(I0_1, INPUT);
pinMode(I0_2, INPUT);
pinMode(I0_3, INPUT);
pinMode(I0_4, INPUT);
pinMode(I0_5, INPUT);

pinMode(Q0_0, OUTPUT);
pinMode(Q0_1, OUTPUT);
pinMode(Q0_2, OUTPUT);
pinMode(Q0_3, OUTPUT);

digitalWrite(Q0_0, LOW);
digitalWrite(Q0_1, LOW);
digitalWrite(Q0_2, LOW);
digitalWrite(Q0_3, LOW);

pinMode(S0_24v, OUTPUT);
pinMode(S1_24v, OUTPUT);
pinMode(S2_24v, OUTPUT);
pinMode(S3_24v, OUTPUT);

digitalWrite(S0_24v, HIGH);
digitalWrite(S1_24v, HIGH);
digitalWrite(S2_24v, HIGH);
digitalWrite(S3_24v, HIGH);

}

void loop() {

bool i0 = digitalRead(I0_0);
bool i1 = digitalRead(I0_1);
bool i2 = digitalRead(I0_2);
bool i3 = digitalRead(I0_3);
bool i4 = digitalRead(I0_4);
bool bypass = digitalRead(I0_5);

if(bypass == HIGH){
    Serial.println("Bypass switch is active");
    digitalWrite(Q0_0, HIGH);
    digitalWrite(Q0_1, HIGH);
    digitalWrite(Q0_2, HIGH);
    digitalWrite(Q0_3, HIGH);
}
else{

    if(i0 == LOW && i3 == LOW && i1 == HIGH && i2 == HIGH && i4 == HIGH){
        Serial.println("Forward left cabin case");
        digitalWrite(Q0_0, HIGH);
        digitalWrite(Q0_1, LOW);
        digitalWrite(Q0_2, HIGH);
        digitalWrite(Q0_3, LOW);
    }
    else if (i0 == LOW && i4 == LOW && i1 == HIGH && i2 == HIGH && i3 == HIGH)
    {
        Serial.println("Forward right cabin case");
        digitalWrite(Q0_0, LOW);
        digitalWrite(Q0_1, HIGH);
        digitalWrite(Q0_2, HIGH);
        digitalWrite(Q0_3, LOW);
    }
    else{
        Serial.println("else case");
        digitalWrite(Q0_0, LOW);
        digitalWrite(Q0_1, LOW);
        digitalWrite(Q0_2, LOW);
        digitalWrite(Q0_3, LOW);
    }
}
delay(200);
}
*/


#include <Arduino.h>

void setup() {

Serial.begin(115200);
pinMode(I0_0, INPUT);
pinMode(I0_1, INPUT);
pinMode(I0_2, INPUT);
pinMode(I0_3, INPUT);
pinMode(I0_6, INPUT);

pinMode(Q0_0, OUTPUT);
pinMode(Q0_2, OUTPUT);
pinMode(Q0_3, OUTPUT);

digitalWrite(Q0_0, LOW);
digitalWrite(Q0_2, LOW);
digitalWrite(Q0_3, LOW);

pinMode(S0_24v, OUTPUT);
pinMode(S2_24v, OUTPUT);
pinMode(S3_24v, OUTPUT);

digitalWrite(S0_24v, HIGH);
digitalWrite(S2_24v, HIGH);
digitalWrite(S3_24v, HIGH);

}

void loop() {

bool i0 = digitalRead(I0_0);
bool i1 = digitalRead(I0_1);
bool i2 = digitalRead(I0_2);
bool i3 = digitalRead(I0_3);
bool bypass = digitalRead(I0_6);

if(bypass == HIGH){
    Serial.println("Bypass switch is active");
    digitalWrite(Q0_0, HIGH);
    digitalWrite(Q0_2, HIGH);
    digitalWrite(Q0_3, HIGH);
}
else{

    if(i0 == LOW && i1 == HIGH && i2 == HIGH && i3 == LOW){
        Serial.println("Forward left cabin case");
        digitalWrite(Q0_0, HIGH);
        digitalWrite(Q0_2, HIGH);
        digitalWrite(Q0_3, LOW);
    }
    else if (i0 == HIGH && i1 == LOW && i2 == HIGH && i3 == LOW){
        Serial.println("Center left cabin case");
        digitalWrite(Q0_0, HIGH);
        digitalWrite(Q0_2, HIGH);
        digitalWrite(Q0_3, HIGH);
    }
    else{
        Serial.println("else case");
        digitalWrite(Q0_0, LOW);
        digitalWrite(Q0_2, LOW);
        digitalWrite(Q0_3, LOW);
    }
}
delay(200);
}