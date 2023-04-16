# DHT11 MONITOR

![ss](https://user-images.githubusercontent.com/109742155/232260368-7305455b-1162-4e19-a574-f2a19127a262.png)

### As you can see there are two different screens displayed based on language. In English screen, the temperature is written in Fahrenheit format and in Turkish, Celsius format is used. To change between languages, you should use a push down button. The store the initial and current language state of screen should use the following global variable.

### char LCD_LANGUAGE = ‘E’; // This variable is used to store current LCD screen language. You should use ‘E’ for English and ‘T’ for Turkish. As you can see, the starting value should be ‘E’.

### While using a push down button, take care to make a change only once while it is activated (meaning it should only change screen on rising edge of resulting signal), you should NOT use delay or sleep in this exercise (because they are not necessary), you should check if the state of button changed from “not pressed” to “pressed” by remembering previous state at the time of button press event. During button press event, the screen should only change once.

### DHT11 could easily be damaged by not using correct resistance or making faulty connections. Be careful otherwise, you will require another DHT11 sensor to show your lab. In this lab, you will be required to show differences in temperature and humidity to verify your sensor works, be careful not to use fire or other extreme methods to change sensor values, it could destroy your sensor.
