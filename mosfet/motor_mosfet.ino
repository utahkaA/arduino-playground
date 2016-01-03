// -------------------------------------------------------------------------------
// Name:           program name
// Author:         @utahkaA (Twitter, GitHub, and so on...)
// Created:        mmm dddd, yyyy
// Last Date:      mmm dddd, yyyy
// Note:           xxxxx
// -------------------------------------------------------------------------------
const int pin_motor = 9;

void setup() {
    pinMode(pin_motor, OUTPUT);
}


void loop() {
    analogWrite(pin_motor, 150);
    delay(1000);
    analogWrite(pin_motor, 0);
    delay(2000);
}
