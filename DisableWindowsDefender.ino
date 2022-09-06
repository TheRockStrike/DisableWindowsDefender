#include "DigiKeyboard.h"

#define KEY_ESC     41
#define KEY_BACKSPACE 42
#define KEY_TAB     43
#define KEY_PRT_SCR 70
#define KEY_DELETE  76
#define KEY_ARROW_RIGHT 0x4F
#define KEY_ARROW_DOWN  0x51
#define KEY_ARROW_UP    0x52

bool execute = 1;
int led = 1;


void setup() {
  
}

void script(){

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_I, MOD_GUI_LEFT);
  DigiKeyboard.delay(2500);

  DigiKeyboard.print("security");
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  for(int i = 0; i<=3; i++){
  delay(50);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_DOWN);
  }

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);

  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1500);

  for(int u = 0; u<=3; u++){
  delay(150);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  }
  DigiKeyboard.delay(800);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(800);

  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(800);

  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_LEFT);  

}

void loop() {
  
  if (execute){
      script();
      execute = 0;

  }

  if(!execute){
    digitalWrite(led, HIGH);
    delay(200);
    digitalWrite(led, LOW);
    delay(200);
  }
  
}
