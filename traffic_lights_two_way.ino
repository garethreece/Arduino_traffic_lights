// Potential answer to the two-way traffic light system. Compare to your system and critically review the difference.

// First, we define the pins that will be used for the different lights,
// including the red, yellow, and green lights for both directions. 
// These are defined as OUTPUT pins, which means they will be used to output signals
// to the physical LEDs connected to the Arduino.

int redLight1 = 2;
int yellowLight1 = 3;
int greenLight1 = 4;
int redLight2 = 5;
int yellowLight2 = 6;
int greenLight2 = 7;

void setup() {
  // Set the pins as outputs
  pinMode(redLight1, OUTPUT);
  pinMode(yellowLight1, OUTPUT);
  pinMode(greenLight1, OUTPUT);
  pinMode(redLight2, OUTPUT);
  pinMode(yellowLight2, OUTPUT);
  pinMode(greenLight2, OUTPUT);
}

// Next, we define a function called "trafficLight" which takes two parameters:
// the time for the red light to be on, and the time for the green light to be on.
// This function controls the traffic light sequence for a single direction of traffic.
// The first thing it does is turn on the red light for the specified time, 
// then turn on the yellow light for a brief period, and then turn on the green light for the specified time.
// Finally, it turns off the green light and turns on the yellow light again for a brief period
// before turning off the yellow light and turning the cycle back to the beginning with the red light.

void trafficLight(int redTime, int greenTime) {
  // Red light
  digitalWrite(redLight1, HIGH);
  digitalWrite(greenLight2, HIGH);
  delay(redTime);

  // Yellow light
  digitalWrite(redLight1, LOW);
  digitalWrite(yellowLight1, HIGH);
  digitalWrite(greenLight2, LOW);
  digitalWrite(yellowLight2, HIGH);
  delay(1000);

  // Green light
  digitalWrite(yellowLight1, LOW);
  digitalWrite(greenLight1, HIGH);
  digitalWrite(yellowLight2, LOW);
  digitalWrite(redLight2, HIGH);
  delay(greenTime);

  // Yellow light
  digitalWrite(greenLight1, LOW);
  digitalWrite(yellowLight1, HIGH);
  digitalWrite(redLight2, LOW);
  digitalWrite(yellowLight2, HIGH);
  delay(1000);

  // Turn off yellow light
  digitalWrite(yellowLight1, LOW);
  digitalWrite(yellowLight2, LOW);
}

// Finally, in the loop function, we call the trafficLight function twice to create the traffic light sequence 
// for both directions of traffic. 
// We also include a delay at the end of each cycle to give time for the traffic to clear
// before the next cycle starts.

void loop() {
  trafficLight(5000, 10000); // Direction 1
  delay(1000);
  trafficLight(10000, 5000); // Direction 2
  delay(1000);
}

// Critically review your code and arduino setup.
// Highlight three things that went well and offer three improvements.