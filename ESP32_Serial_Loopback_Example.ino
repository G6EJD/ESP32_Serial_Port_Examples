// ESP32 sending and receiving data to and from itself ! 
HardwareSerial Sender(1);
HardwareSerial Receiver(2);
void setup()
{
  //Serial.begin(Baud Rate, Data Protocol, Txd pin, Rxd pin);
  Serial.begin(115200);
  Sender.begin(115200, SERIAL_8N1, 13, 12);
  Receiver.begin(115200, SERIAL_8N1, 27, 14);
}

void loop() {
  Sender.println("Hello World, the quick brown fox jumps over the lazy dogs back");
  while (Receiver.available()) {
    char RxdChar = Receiver.read();
    Serial.print(RxdChar);
  }
  delay(2000);
}
