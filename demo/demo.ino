#define LED_PIN 27 /*ESP 32 D27 LHS Middle*/
#define BTN_PIN 26 /* ESP 32 D26 LHS Middle*/

bool lightOn = false;

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
  
}

void loop() {
  Serial.println("Hello, world!");
  bool bBtnState = digitalRead(BTN_PIN);
  if(bBtnState) { 
    Serial.println("Btn Press!");  
    lightOn = !lightOn;
    
  }
  digitalWrite(LED_PIN, lightOn);
  delay(100);
}
