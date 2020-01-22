#include "WiFi.h"
#include "HTTPClient.h"
#define WIFI_SSID "<SSID-GOES-HERE>"
#define WIFI_PWD "<PASSWORD-GOES-HERE>"
#define WEBHOOK "https://maker.ifttt.com/trigger/iot-light/with/key/<YOUR-IFTTT-KEY>"

#define LED_PIN 27 /*ESP 32 D27 LHS Middle*/
#define BTN_PIN 26 /* ESP 32 D26 LHS Middle*/
#define LDR_PIN 33 /* ESP 32 D33 LHS Middle*/

bool lightOn = false;

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
  pinMode(LDR_PIN, INPUT);

  WiFi.begin(WIFI_SSID, WIFI_PWD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.println("Connecting to WiFi..");
  }
 
  Serial.println("Connected to the WiFi network");

  
}

void loop() {
  Serial.println("Hello, world!");
  bool bBtnState = digitalRead(BTN_PIN);
  int ldrValue = analogRead(LDR_PIN);
  bool changedState = false;
  
  if(ldrValue < 1000) {
    lightOn = true;
    changedState = true;
  }

  if(ldrValue >= 4095) {
    lightOn = false;
    changedState = true;
  }
  
  Serial.println(ldrValue, DEC);
  if(bBtnState) { 
    Serial.println("Btn Press!");  
    lightOn = !lightOn;
    changedState = true;
  }
  if(changedState) {
    digitalWrite(LED_PIN, lightOn);
    callWebHook(lightOn);
  }
  delay(500);
}

boolean callWebHook(boolean ledStatus) {
  HTTPClient http;
  http.begin(WEBHOOK);
  http.addHeader("Content-Type", "application/json");
  int httpCode = http.POST("{\"value1\":\"" + (String)ledStatus + "\"}");
  String payload = http.getString();
  http.end();
  Serial.println("Curl call result: ");
  Serial.println(httpCode);
  Serial.println(payload);
  http.end();
}
