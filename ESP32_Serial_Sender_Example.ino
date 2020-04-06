// Sending/Receiving example

HardwareSerial Sender(1);   // Define a Serial port instance called 'Sender' using serial port 1

#define Sender_Txd_pin 13
#define Sender_Rxd_pin 12

void setup() {
  //Serial.begin(Baud Rate, Data Protocol, Txd pin, Rxd pin);
  Serial.begin(115200);                                             // Define and start serial monitor
  Sender.begin(115200, SERIAL_8N1, Sender_Txd_pin, Sender_Rxd_pin); // Define and start Sender serial port
}

void loop() {
  float sensor_temperature = 22.141;                               // Set an example value
  Sender.print(sensor_temperature);                                // Send it to Sender serial port
  delay(2000);
}
