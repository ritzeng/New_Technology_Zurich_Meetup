/*
  AnalogReadSerialFR

  Reads a analog input on A0, prints the result to the Serial Monitor

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/DigitalReadSerial
*/

int sensorPin = A0;    // select the input pin for the potentiometer

// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(115200);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input pin:
  int analogSensor = analogRead(sensorPin);
  // print out the value of the A0 pin:
  Serial.println(analogSensor);
  delay(1);        // delay in between reads for stability
}
