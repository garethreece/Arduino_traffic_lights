# Arduino_traffic_lights
Code for setting up a single traffic light and a two-way traffic light system.

# Explaination for single traffic light file traffic_lights.ino
This is a code for a simple traffic light system with three LEDs representing the three lights of a traffic signal - red, yellow, and green.

First, the code defines the pins for each LED as variables - redLED, yellowLED, and greenLED. These variables are assigned values of 13, 12, and 11 respectively, indicating the digital pins on the Arduino board to which the LEDs are connected.

The setup() function is then used to set the mode of each LED pin to "OUTPUT" so that the Arduino knows that it is supposed to send a signal out to those pins to turn the LEDs on and off.

The loop() function is where the actual traffic light sequencing happens. It first sets the red light to HIGH (on) using digitalWrite(), and then waits for 5 seconds using delay(). After 5 seconds, it sets the yellow light to HIGH (on) using digitalWrite() and waits for 2 seconds. Next, it turns off the red and yellow lights by setting their pins to LOW (off) using digitalWrite(), and turns on the green light by setting its pin to HIGH (on) using digitalWrite(). After waiting for 5 seconds, it turns off the green light and turns on the yellow light again for 2 seconds. This cycle repeats continuously in a loop.

Overall, this code creates a basic traffic light system that cycles through the red, red-yellow, green, and yellow lights in a sequence.

# Explaination for two-way traffic light system traffic_lights_two_way.ino
This code is for a traffic light system that controls two sets of traffic lights for two different directions.

First, the code defines six integer variables, one for each of the six LEDs that will be used as the traffic lights. The variables are given pin numbers corresponding to the physical pins on the Arduino board where the LEDs are connected.

In the setup function, the pins are configured as outputs using the pinMode() function. This is necessary to tell the Arduino board that these pins will be used to output electrical signals to the LEDs.

The trafficLight() function takes two parameters: redTime and greenTime, both of which are integers. This function controls the sequence of lights for a single direction of traffic.

Inside the function, the first thing it does is turn on the red light for one direction and the green light for the other direction by using the digitalWrite() function. It then waits for the duration of the red light using the delay() function.

Next, it turns off the red light for the first direction, turns on the yellow light for both directions, and waits for one second. Then it turns off the yellow light for the first direction and turns on the green light for the first direction and the red light for the second direction. It waits for the duration of the green light.

After that, it turns off the green light for the first direction, turns on the yellow light for both directions, and waits for one second. Finally, it turns off the yellow light for both directions.

In the loop function, the trafficLight() function is called twice, once for each direction, with different redTime and greenTime values. The delay function is used to pause the program for 1 second between each sequence.

Overall, this code is controlling two sets of traffic lights, each with a red, yellow, and green light, and alternating the light sequence for each direction of traffic.
