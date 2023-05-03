#include <Arduino.h>
#include <ultrasonic.h>

void setup()
{
  // Serial Port begin
  Serial.begin(9600);
  // Define I/O
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{

  ultrasonic();

  delay(250);
}