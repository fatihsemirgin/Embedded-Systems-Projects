#define nem_sensoru A0
#define calisma_siniri 500
#define beyaz_led_pin 11
#define yesil_led_pin 10
#define motor_pin 9
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcdekranim(0x3f, 16, 2);
int nem_degeri = 0;
void setup() {
  lcdekranim.init();
  lcdekranim.backlight();
  lcdekranim.setCursor(6, 0);
  lcdekranim.print("NEM");
  lcdekranim.setCursor(5, 1);
  lcdekranim.print("OLCER");
  delay(2000);
  lcdekranim.clear();
  pinMode(beyaz_led_pin, OUTPUT);
  pinMode(yesil_led_pin, OUTPUT);
  pinMode(motor_pin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  nem_degeri = analogRead(nem_sensoru);
  Serial.println(nem_degeri);
  if (nem_degeri > calisma_siniri) {
    lcdekranim.clear();
    lcdekranim.setCursor(4, 0);
    lcdekranim.print("NEM: ");
    lcdekranim.print(abs(1000 - nem_degeri) / 10);
    lcdekranim.print("%");
    lcdekranim.setCursor(1, 1);
    lcdekranim.print("GUNCELLENIYOR");
    lcdekranim.blink();
    digitalWrite(motor_pin, HIGH);
    digitalWrite(yesil_led_pin, HIGH);
    digitalWrite(beyaz_led_pin, LOW);
    delay(3000);
  } else {
    lcdekranim.clear();
    lcdekranim.setCursor(4, 0);
    lcdekranim.print("NEM: ");
    lcdekranim.print(abs(1000 - nem_degeri) / 10);
    lcdekranim.print("%");
    lcdekranim.setCursor(3, 1);
    lcdekranim.print("IDEAL NEM");
    lcdekranim.blink();
    digitalWrite(yesil_led_pin, LOW);
    digitalWrite(beyaz_led_pin, HIGH);
    digitalWrite(motor_pin, LOW);
    delay(7000);
  }
}