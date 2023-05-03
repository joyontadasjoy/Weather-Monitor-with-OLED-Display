#include "DHT.h"
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SH1106.h>

#define DHTPIN 2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);
#define OLED_RESET -1
String Comment;

Adafruit_SH1106 display(OLED_RESET);

int ldrPin = A0;
int ldrValue = 0;

void setup() {
  Serial.begin(9600);
  dht.begin();

  display.begin(SH1106_SWITCHCAPVCC, 0x3C); // Initialize OLED
  display.clearDisplay();
  display.display();

  pinMode(ldrPin, INPUT);
}

void loop() {
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  float f = dht.readTemperature(true);

  // simplified version of the heat index formula
  float feelsLikeC = t + (0.33 * (1.0 - (h / 100.0)) * (t - 30.0));

  if (feelsLikeC >= 32) {
    Comment = "It is hot today";
  }
  else if (feelsLikeC < 32) {
    Comment = "The weather is okay";
  }

  ldrValue = analogRead(ldrPin);
  float sunlight = map(ldrValue, 0, 1023, 0, 100);
  display.clearDisplay();

  display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.print("Humidity: ");
  display.print(h);
  display.print("%");

  display.setTextSize(1);
  display.setCursor(0, 10);
  display.print("Temperature: ");
  display.print(t);
  display.print("C");

  display.setTextSize(1);
  display.setCursor(0, 20);
  display.print("Temperature: ");
  display.print(f);
  display.print("F");

  display.setTextSize(1);
  display.setCursor(0, 30);
  display.print("Feels like: ");
  display.print(feelsLikeC);
  display.print("C");

  display.setTextSize(1);
  display.setCursor(0, 40);
  display.print("Light: ");
  display.print(map(ldrValue, 1023, 0, 0, 100)); // In my sensor at minimum light value 1023
  display.print("%");

  display.display();
  delay(1000);
}
