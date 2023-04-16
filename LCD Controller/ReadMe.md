# LCD CONTROLLER

### It is a LCD controller using Arduino and other circuit elements. This controller will be managed by global variables. It will display and control which texts are currently shown in LCD (in both rows), if they are currently scrolling or not, the direction of scrolling and the speed of scrolling. An example of global variables and resulting LCD screen are given below.

### boolean SCROLL_FLAG = true; // This variable is used to turn scrolling on or off.

### int SCROLL_WAIT = 1000; // This variable is used to store scrolling wait time before the next scroll operation. 1000 means 1000 milliseconds and this will execute a scrolling operation every 1 second.

### char SCROLL_DIRECTION = ‘L’; // This variable is used to store direction of scroll operation. It should be ‘L’ for LEFT and ‘R’ for RIGHT. Any other value should not work correctly.

### char LCD_ROW_1 [] = "This text is for row 0 and longer than 16 characters."; // This variable stores the text that will be printed to first line of LCD.

### char LCD_ROW_2 [] = "ABCD EFGH"; // This variable stores the text that will be printed to second line of LCD.\*\*

### Assuming the global variables that are given above, resulting LCD screen of these variable values are given below.

![Ekran görüntüsü 2023-03-27 145013](https://user-images.githubusercontent.com/109742155/227933525-dc862e21-7122-4c8f-a3f4-f41012c3be53.png)
