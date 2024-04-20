#include <Wire.h>
#include "Adafruit_TCS34725.h"

// Initialize the color sensor
Adafruit_TCS34725 tcs = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_4X);

void setup() {
  Serial.begin(9600); // Start serial communication for debugging
  if (tcs.begin()) {
    Serial.println("Color sensor initialized.");
  } else {
    Serial.println("Error initializing color sensor.");
  }
}

void loop() {
  // Read RGB color values from the sensor
  uint16_t clear, red, green, blue;
  tcs.getRawData(&red, &green, &blue, &clear);

  // Print the RGB values to the serial monitor
  Serial.print("Red: "); Serial.print(red);
  Serial.print(" Green: "); Serial.print(green);
  Serial.print(" Blue: "); Serial.print(blue);
  Serial.print(" Clear: "); Serial.println(clear);

  // Perform color detection based on the RGB values
  // Add your code here to determine the detected color based on the RGB values
  
  delay(1000); // Add a delay before reading the sensor again
}
