uint8_t txByte = 0xA; 
void setup() {
  Serial.begin(9600);      // For PC Serial Monitor
  Serial1.begin(115200);   // Match STM32 baud rate
}

void loop() {
   Serial1.write(txByte);     // Send to STM32
  Serial.print("Sent to STM32: 0x");
  Serial.println(txByte, HEX);  // Print HEX value to monitor
  

  delay(1000);
  if (Serial1.available()) {
    uint8_t data = Serial1.read();  // Read byte from STM32
    Serial.print("Received: ");
    Serial.println(data,HEX);           // Should print: 99 every second
  }
  delay(1000);
}
