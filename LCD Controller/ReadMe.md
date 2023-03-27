# LCD CONTROLLER

### It is a LCD controller using Arduino and other circuit elements. This controller will be managed by global variables. It will display and control which texts are currently shown in LCD (in both rows), if they are currently scrolling or not, the direction of scrolling and the speed of scrolling. An example of global variables and resulting LCD screen are given below.

### boolean SCROLL_FLAG = true; // This variable is used to turn scrolling on or off.

### int SCROLL_WAIT = 1000; // This variable is used to store scrolling wait time before the next scroll operation. 1000 means 1000 milliseconds and this will execute a scrolling operation every 1 second.

### char SCROLL_DIRECTION = ‘L’; // This variable is used to store direction of scroll operation. It should be ‘L’ for LEFT and ‘R’ for RIGHT. Any other value should not work correctly.

### char LCD_ROW_1 [] = "This text is for row 0 and longer than 16 characters."; // This variable stores the text that will be printed to first line of LCD.

### char LCD_ROW_2 [] = "ABCD EFGH"; // This variable stores the text that will be printed to second line of LCD.\*\*

### Assuming the global variables that are given above, resulting LCD screen of these variable values are given below.

**LCD SCREEN AT TIME 0 (MILLISECONDS):
00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
00** T h i s t e x t i s f o r
**01** A B C D E F G H

**LCD SCREEN AT TIME 1000 (MILLISECONDS):
00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
00** h i s t e x t i s f o r
**01** B C D E F G H A

**LCD SCREEN AT TIME 2000 (MILLISECONDS):
00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
00** i s t e x t i s f o r r
**01** C D E F G H A B

**LCD SCREEN AT TIME 3000 (MILLISECONDS):
00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
00** s t e x t i s f o r r o
**01** D E F G H A B C

**LCD SCREEN AT TIME 4000 (MILLISECONDS):
00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
00** t e x t i s f o r r o w
**01** E F G H A B C D

**LCD SCREEN AT TIME 5000 (MILLISECONDS):
00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
00** t e x t i s f o r r o w
**01** E F G H A B C D

**LCD SCREEN AT TIME 6000 (MILLISECONDS):
00 01 02 03 04 05 06 07 08 09 10 11 12 13 14 15
00** e x t i s f o r r o w 0
**01** F G H A B C D E
