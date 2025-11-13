/***************************************************
 * Smart Home Automation using NodeMCU + Blynk + Google Assistant
 ***************************************************/
#define BLYNK_TEMPLATE_ID "YOUR_TEMPLATE_ID"
#define BLYNK_AUTH_TOKEN "YOUR_BLYNK_TOKEN"
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <DHT.h>

char auth[] = "YOUR_BLYNK_TOKEN";     // From Blynk app
char ssid[] = "YOUR_WIFI_SSID";       // Wi-Fi name
char pass[] = "YOUR_WIFI_PASSWORD";   // Wi-Fi password

#define DHTPIN D2
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

// Relays for appliances
#define RELAY1 D5
#define RELAY2 D6
#define RELAY3 D7
#define RELAY4 D8

BlynkTimer timer;

void sendSensorData() {
  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  Blynk.virtualWrite(V5, temp);
  Blynk.virtualWrite(V6, hum);
}

void setup() {
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
  dht.begin();

  pinMode(RELAY1, OUTPUT);
  pinMode(RELAY2, OUTPUT);
  pinMode(RELAY3, OUTPUT);
  pinMode(RELAY4, OUTPUT);

  digitalWrite(RELAY1, HIGH);
  digitalWrite(RELAY2, HIGH);
  digitalWrite(RELAY3, HIGH);
  digitalWrite(RELAY4, HIGH);

  timer.setInterval(2000L, sendSensorData); // Update sensor data
}

void loop() {
  Blynk.run();
  timer.run();
}

// --- Blynk Virtual Pins for Manual/Voice Control ---
BLYNK_WRITE(V1) { digitalWrite(RELAY1, param.asInt() ? LOW : HIGH); }
BLYNK_WRITE(V2) { digitalWrite(RELAY2, param.asInt() ? LOW : HIGH); }
BLYNK_WRITE(V3) { digitalWrite(RELAY3, param.asInt() ? LOW : HIGH); }
BLYNK_WRITE(V4) { digitalWrite(RELAY4, param.asInt() ? LOW : HIGH); }
