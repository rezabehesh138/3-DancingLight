// LED connected to digital pin ( 0, 1, 2, 3, 4, 5, 6, 7 )
int LED[] = { 0, 1, 2, 3, 4, 5, 6, 7 };

void setup() {

  //sets the pins (LED) as output
  for (int i = 0; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {

  for (int i = 0; i < 8; i++) {
    digitalWrite(LED[i], HIGH);  //sets the digital pins LED on ( 0 or 1 or 2 or 3 or 4 or 5 or 6 or 7 )
    delay(500);                  // waits for 0.5 second
    digitalWrite(LED[i], LOW);   //sets the digital pins (LED) off
  }
}
