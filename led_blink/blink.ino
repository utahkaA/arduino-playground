// -------------------------------------------------------------------------------
// Name:           blink.ino
// Author:         @utahkaA (Twitter, GitHub, and so on...)
// Created:        March 23th, 2015
// Last Date:      March 23th, 2015
// Note:           it blinks a LED.
// -------------------------------------------------------------------------------

void setup()
{
    pinMode(9, OUTPUT);
}

void loop()
{
    digitalWrite(9, HIGH);
    delay(500);
    digitalWrite(9, LOW);
    delay(500);
}
