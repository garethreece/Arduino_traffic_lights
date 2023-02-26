// This code will turn on the red light for 5 seconds, then turn on the red and yellow lights for 2 seconds, 
// followed by the green light for 5 seconds, and finally the yellow light for 2 seconds before repeating the cycle. 
// Note - you will need to connect the appropriate LEDs to the correct pins on your Arduino board.
// Red, Yellow, and Green LED pins
int redLED = 11;
int yellowLED = 12;
int greenLED = 13;

void setup() {
  // Set the LED pins as output
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  // Red light
  digitalWrite(redLED, HIGH);
  delay(5000);

  // Red and yellow lights
  digitalWrite(yellowLED, HIGH);
  delay(2000);

  // Green light
  digitalWrite(redLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(greenLED, HIGH);
  delay(5000);

  // Yellow light
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(2000);
}

// Once completed and assessed, start designing a two-way traffic lights system.