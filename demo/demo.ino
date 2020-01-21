#define LED_PIN 27 /*ESP 32 D27 LHS Middle*/
#define BTN_PIN 26 /* ESP 32 D26 LHS Middle*/
#define LDR_PIN 25 /* ESP 32 D25 LHS Middle*/

bool lightOn = false;

void setup() {
  Serial.begin(115200);
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT);
  pinMode(LDR_PIN, INPUT);
  
}

void loop() {
  Serial.println("Hello, world!");
  bool bBtnState = digitalRead(BTN_PIN);
  int ldrValue = analogRead(LDR_PIN);
  
  if(ldrValue < 1000) {
    lightOn = true;
  }

  if(ldrValue >= 4095) {
    lightOn = false;
  }
  
  Serial.println(ldrValue, DEC);
  if(bBtnState) { 
    Serial.println("Btn Press!");  
    lightOn = !lightOn;
    
  }
  digitalWrite(LED_PIN, lightOn);
  delay(100);
}
