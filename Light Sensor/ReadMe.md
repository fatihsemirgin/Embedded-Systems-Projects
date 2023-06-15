# LIGHT SENSOR

### It is an automatic light that activates when the environment gets dark enough. For this purpose use a LED to represent the light, a light sensor to detect environment light intensity (e.g. LDR 5mm Light Sensor) and Arduino IDE serial monitor to print out light sensor value and LED status.

### The light sensor might give results ranging from 0 to 800 or 1000. Test your light sensor to check which values it outputs. When you established possible lowest, highest and median point (e.g. possibly 400 or 500), you could try to assign median point for light activation, if the environment light value is higher than this median point, the LED is turned off and when it is lower, the LED is turned on. You can try to set this median point slightly lower than current room light density, to make state change easier.

### You are also required to output current sensor reading and LED status to serial monitor. An example output is given below.

![Ekran görüntüsü 2023-04-16 040427](https://user-images.githubusercontent.com/109742155/232260646-1174bd64-4ccc-4400-a715-72f3a9be3783.png)

### There are two global variables to manage your program. One is LED activation value to check against the sensor value and other is the time between serial monitor outputs (e.g. if it is 1000 ms, every one second a new output is printed). Take care that your program should not be sleeping between serial monitor output times, it should be active and respond to light changes immediately. An example of these global variables are given below

### int LED_ACTIVATION_VALUE = 500;

### int SERIAL_OUTPUT_FREQUENCY = 50
