//Lotz Racing
//Z450 Button Box, USB
//Version: 1.0
//12 Button, 2 Switch


#include "HID-Project.h"

//pin assignments
const int button1 = 2;
const int button2 = 3;
const int button3 = 4;
const int button4 = 5;
const int button5 = 6;
const int button6 = 7;
const int button7 = 8;
const int button8 = 9;
const int button9 = 10;
const int button10 = 16;
const int button11 = 14;
const int button12 = 15;
const int button13 = A0;
const int button14 = A1;

//indexed array of buttons
const int button[] = {button1, button2, button3, button4, button5, button6, button7, button8, button9, button10, button11, button12, button13, button14};

void setup() {
  
  //set pins to input, with pullup, buttons are on low side
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  pinMode(button4, INPUT_PULLUP);
  pinMode(button5, INPUT_PULLUP);
  pinMode(button6, INPUT_PULLUP);
  pinMode(button7, INPUT_PULLUP);
  pinMode(button8, INPUT_PULLUP);
  pinMode(button9, INPUT_PULLUP);
  pinMode(button10, INPUT_PULLUP);
  pinMode(button11, INPUT_PULLUP);
  pinMode(button12, INPUT_PULLUP);
  pinMode(button13, INPUT_PULLUP);
  pinMode(button14, INPUT_PULLUP);
  Gamepad.begin();
}

void loop() {

  int i = 1;
  while (button[i] < 15) {
    if (!digitalRead(button[i])) {                                        //digital read is active low, =0 when pressing button, =1 when not pressing
    Gamepad.press(button[i]);                                        
    delay(10);                                                            //Delay to debounce button
    }
    if (digitalRead(button[i])) {                                         
      Gamepad.release(button[i]);
    }
  }
  
  Gamepad.write();

}



 













