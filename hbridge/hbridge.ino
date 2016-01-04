// -------------------------------------------------------------------------------
// Name:           program name
// Author:         @utahkaA (Twitter, GitHub, and so on...)
// Created:        mmm dddd, yyyy
// Last Date:      mmm dddd, yyyy
// Note:           xxxxx
// -------------------------------------------------------------------------------
const int mot_11 = 11;
const int mot_12 = 10;
const int mot_21 = 6;
const int mot_22 = 5;

void setup() {
    pinMode(mot_11, OUTPUT);
    pinMode(mot_12, OUTPUT);
    pinMode(mot_21, OUTPUT);
    pinMode(mot_22, OUTPUT);
}

/*
    counterclockwise: 255 >= val > 0
    clockwise: 0 > val >= -255

    time: the length to move motor. [ms]
*/
void motor(int val, int time) {
    bool is_clockwise = false
        if (val < 0) {
            is_clockwise = true;
            val *= -1;
        }
    if (is_clockwise) {
        analogWrite(mot_11, 0);
        analogWrite(mot_12, val);
        analogWrite(mot_21, val);
        analogWrite(mot_22, 0);
    } else {
        analogWrite(mot_11, val);
        analogWrite(mot_12, 0);
        analogWrite(mot_21, 0);
        analogWrite(mot_22, val);
    }
    delay(time);
}

void loop() {
    motor(150, 2000);
    motor(50, 2000);
    motor(-150, 2000);
    motor(-50, 2000);
}
