#include <ESP8266WiFi.h>
#include <ESP8266mDNS.h>
#include <WiFiUdp.h>
#include <ArduinoOTA.h>
#include <DNSServer.h>
#include <ESP8266WebServer.h>
#include <WiFiManager.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp8266.h>
#include <Adafruit_NeoPixel.h>

#define PIN_LED_V      14
#define PIN_LED_C      12
#define PIN_CONF_MODE  13

#define WIFI_TIMEOUT     180  // タイムアウト
#define WIFI_MIN_SIGNAL  30   // 信号強度
#define DEEPSLEEP_MODE   WAKE_RF_DEFAULT
#define WAKEUP_TIME      -1 // will not wake up by timer

char   blynkAuthToken[] = "BLYNKTOKEN";
const char wifiApName[] = "OnDemandAP";

int br, r, g, b = 0;

// headers: OTA
void beginOTA();

// headers: RGBLED
void ledBegin();
void ledChangeColor(int r, int g, int b, int br);

// headers: WiFiManager
void connectWiFi();
