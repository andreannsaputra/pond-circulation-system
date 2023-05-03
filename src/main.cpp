#include <Arduino.h>
#include <Wire.h>

// #include <LiquidCrystal_I2C.h>

#include <ultrasonic.h>

// LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup()
{
  // Serial Port begin
  Serial.begin(9600);
  // Define I/O
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  // lcd.init();
  // lcd.clear();
  // lcd.backlight();

  // lcd.setCursor(0, 0);
  // lcd.print("Pond Circulation System...");
  // delay(2000);
}

void loop()
{

  ultrasonic();
  // lcd.setCursor(0, 0);
  // lcd.print("Dist:");
  // lcd.setCursor(5, 0);
  // lcd.print(cm);
  // delay(250);
}