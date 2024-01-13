// Arduino Button Library
// https://github.com/JChristensen/JC_Button
// Copyright (C) 2018 by Jack Christensen and licensed under
// GNU GPL v3.0, https://www.gnu.org/licenses/gpl.html
//
// Example sketch to demonstrate toggle buttons.

#include <JC_Button.h>          // https://github.com/JChristensen/JC_Button

// pin assignments
const byte
    BUTTON1_PIN(A3),             // connect a button switch from this pin to ground
    BUTTON2_PIN(A1),
    BUTTON3_PIN(A2);             // connect a button switch from this pin to ground

ToggleButton                    // define the buttons
    btn1(BUTTON1_PIN),
    btn2(BUTTON2_PIN),          // this button's initial state is off
    btn3(BUTTON3_PIN);    // this button's initial state is on

void setup() {
    Serial.begin(115200);

    // initialize the button objects
    btn1.begin();
    btn2.begin();
    btn3.begin();

    Serial.println("setup done");
}

void loop() {
    // read the buttons
    btn1.read();
    btn2.read();
    btn3.read();

    // if button state changed, update the LEDs
    if (btn1.changed()) {
      // digitalWrite(LED1_PIN, btn1.toggleState());
      Serial.println("btn1 changed");
    }
    if (btn2.changed()) {
      // digitalWrite(LED1_PIN, btn1.toggleState());
      Serial.println("btn2 changed");
    }
    if (btn3.changed()) {
      // digitalWrite(LED1_PIN, btn1.toggleState());
      Serial.println("btn3 changed");
    }
}