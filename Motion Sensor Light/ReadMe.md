# MOTION SENSOR LIGHT WITH TIMER

### Compare this system to motion sensor lights or lamps that you have seen in buildings. When motion sensor detects a movement, it turns the light on and waits a previously determined time before it turns the light off and returns to its initial state, waiting for activation again.

### int TIMER_START = 30; // This variable is used for how long our LED light should be turned on, where 30 represents 30 seconds. You can also use “30000” to represent it in milliseconds.

### int TIMER_SPEED = 500; // This variable is used for how long a second should be in your circuit. Even though it should be 1000 to make it factually correct, it is selected as 500 (milliseconds) to make your timer goes faster for easier development and video taking purposes.

### int ANIMATION_SPEED = 200; // This variable is used for how long a single part of animation should be displayed. Alternatively, you can assign it to 100 (milliseconds) to make it faster.

![seven](https://user-images.githubusercontent.com/109742155/232260478-55dda2dc-98f6-4ded-b81b-e3e2e5d4abc1.png)

### Considering the 7 segment display image above, your animation should be a single light part moving from A to F in a clockwise direction (A, B, C, D, E, F, then starting from A again).

### It should work (given the global variables above) like the following, when it detects a movement, it will turn on the LED and start to count from 30 to 0. During this, until reaching 15 (hexadecimal F), it will print a rotating animation on 7 segment display, turning on clockwise direction. When the countdown reaches 15, it will print “F” and until reaching zero, it will print the hexadecimal value of remaining time from “F” to 0. When it reaches to 0, it will turn off the LED and 7 segment display.
