# define PIN_LED 7
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200);
  while (!Serial) {
  }
  count = toggle = 0;
  digitalWrite(PIN_LED, toggle);
}

void loop() {
  delay(1000);
  for(int i = 0; i < 6; i++) {
    Serial.println(++count);
    toggle = count;
    digitalWrite(PIN_LED, toggle);
    delay(100);
    Serial.println(--count);
    toggle = count;
    digitalWrite(PIN_LED, toggle);
    delay(100);
  }
  while(1) {
    digitalWrite(PIN_LED, 1);
  }
}
