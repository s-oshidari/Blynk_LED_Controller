#include "Blynk_LED_Controller.h"

void setup() {
  Serial.begin(115200);
  Serial.println("\nStart\n");

  ledBegin();
  ledChangeColor(255, 0, 0, 100);
  
  connectWiFi();
  beginOTA();
  
  Blynk.config(blynkAuthToken);
}

void loop() {
  ArduinoOTA.handle();
  Blynk.run();
  
  ledChangeColor(r, g, b, br);
  delay(10);
}
