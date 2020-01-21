#define LED_PIN 27 /*ESP 32 D27 LHS Middle*/

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  Serial.println("Hello, world!");
  digitalWrite(LED_PIN, HIGH);
  
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
