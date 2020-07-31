void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

int counter;

void loop() {
  if (counter < 3550) {
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(1000);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(1000);  
    counter += 20;
  } else if (counter < 3600) {
    digitalWrite(LED_BUILTIN, HIGH);   
    delay(100);                      
    digitalWrite(LED_BUILTIN, LOW);   
    delay(100);
    counter += 2;
  } else {
    digitalWrite(LED_BUILTIN, HIGH);   
  }
}
