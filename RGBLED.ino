Adafruit_NeoPixel RGBLED = Adafruit_NeoPixel(1, PIN_LED_C, NEO_RGB + NEO_KHZ800);

void ledBegin() {
  pinMode(PIN_LED_V, OUTPUT);
  digitalWrite(PIN_LED_V, HIGH);
  RGBLED.begin();
  delay(10);
  RGBLED.show();
}

void ledChangeColor(int _r, int _g, int _b, int _br) {
  RGBLED.setBrightness(br);
  RGBLED.setPixelColor(0, _r, _g, _b);
  RGBLED.show();
}

