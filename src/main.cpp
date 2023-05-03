#include <Arduino.h>

int trigPin = 11;
int echoPin = 12;
long duration, cm;

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
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.  duration = pulseIn (echoPin, HIGH);
}