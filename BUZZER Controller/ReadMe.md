# BUZZER CONTROLLER

### It is a buzzer controller to simulate a door bell using Arduino and other circuit elements. This controller will be managed by global variables and a push down button. The global variables are given below.

### int SOUND_DURATION = 500; // This variable is for the main time duration for every sound step in sound string. 500 is for 500 milliseconds.

### int SILENCE_DURATION = 50; // This variable is for the time duration between elements of the sound string. This is used to have a tiny window of separation between sounds to make it more understandable. 50 is for 50 milliseconds.

### int MELODY [] = {1,1,5,5,6,6,5,0,4,4,3,3,2,2,1}; // This variable is for melody that will be played when push down button is pressed. This melody is a simplified representation of “Twinkle Twinkle Little Star” by Wolfgang Amadeus Mozart.

### For melody, you should use different integers for different sounds. Examples of integers and corresponding musical notes are given below.

```
INTEGER MUSICALNOTE
0 NO SOUND
1 Do (Low)
2 Re
3 Mi
4 Fa
5 Sol
6 La
7 Si
8 Do (High)
```
