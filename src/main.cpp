#include <Arduino.h>
#include <Wire.h>

int trigPin = 11;
int echoPin = 12;
int relayPump = 8;
int relaySolenoid = 9;
int photoDiode = 8;
long duration, cm;
int value = 0;

void setup()
{
  // Serial Port begin
  Serial.begin(9600);
  // Define I/O
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(relayPump, OUTPUT);
  pinMode(relaySolenoid, OUTPUT);
  pinMode(photoDiode, INPUT);
}

void loop()
{
  value = digitalRead(photoDiode);

  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the signal from the sensor // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.  duration = pulseIn (echoPin, HIGH);
  duration = pulseIn(echoPin, HIGH);

  // Convert the time into a distance
  cm = (duration / 2) / 29.1;

  // if ultrasonic detects the water level is at 25 cm
  // The height of tank is 40 cm, so 40-25 = 15
  // the pump will turn off
  if (cm <= 15)
  {
    digitalWrite(relayPump, LOW);
  }
  // otherwise the pump 1 will turn on and fill the water
  else
  {
    digitalWrite(relayPump, HIGH);
    // if the photodiode detects low water turbidity levels
    // solenoid valve will close
    if (value == LOW)
    {
      digitalWrite(relaySolenoid, LOW);
    }

    // else solenoid valve will open
    else
    {
      digitalWrite(relaySolenoid, HIGH);
    }
  }
}