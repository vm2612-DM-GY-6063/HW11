const int ledPins[] = {2, 3, 4, 5, 6, 7}; 
const int numLEDs = 6; 

void setup() {
 
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {

  int seconds = (millis() / 1000) % 60;


  for (int i = 0; i < numLEDs; i++) {
    int bitValue = (seconds >> i) & 1; 
    digitalWrite(ledPins[i], bitValue);
  }

  delay(100); 
}
