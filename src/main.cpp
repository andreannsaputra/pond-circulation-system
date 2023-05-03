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

  // display initial value of ultrasonic and photodiode

  // if ultrasonic detects the water level is at 25 cm
  // the pump will turn off

  // otherwise the pump 1 will turn on and fill the water

  // if the photodiode detects low water turbidity levels
  // solenoid valve will close

  // else solenoid valve will open
}