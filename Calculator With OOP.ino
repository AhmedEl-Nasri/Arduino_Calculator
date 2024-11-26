#include <Cal_Cu.h>


const byte ROWS = 4;   
const byte COLS = 6;   
char keys[ROWS][COLS] = {
  {'C', '7', '8', '9', 's', '/'},
  {'y', '4', '5', '6', 'c', '*'},
  {'W', '1', '2', '3', 't', '-'},
  {'R', 'D', '0', '=', 't', '+'}
};
byte rowPins[ROWS] = {22, 23, 24, 25};     
byte colPins[COLS] = {26, 27, 28, 29, 30, 31};  


char keys2[ROWS][4] = {
  {'M', 'L', 'e', 'A'},
  {'r', 'E', 'p', 'k'},
  {'n', 'g', 'h', 'j'},
  {'o', 'q', '.', ')'}
};
byte rowPins2[ROWS] = {32, 33, 34, 35};    
byte colPins2[4] = {36, 37, 38, 39};    

// Create  Calcu object
Cal_Cu calc(0x27, 16, 2, ROWS, COLS, keys, rowPins, colPins, ROWS, 4, keys2, rowPins2, colPins2, 7);

void setup() {
  // Initialize the calculator
  calc.begin();
}

void loop() {
  // Run the calculator's main loop
  calc.loop();
}