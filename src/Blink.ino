//simple code burn to stm32f103c6 vis ttl 
void setup() {
  Serial.begin(115200);
  pinMode(PC13, OUTPUT);
}

void loop() {
  digitalWrite(PC13, HIGH);   
  delay(500); 
  Serial.print("high");             
  digitalWrite(PC13, LOW);    
  delay(100);  
  Serial.print("low");             
}
