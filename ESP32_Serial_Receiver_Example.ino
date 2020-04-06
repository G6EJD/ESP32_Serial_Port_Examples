// Sending/Receiving example

HardwareSerial Receiver(2); // Define a Serial port instance called 'Receiver' using serial port 2

#define Receiver_Txd_pin 27
#define Receiver_Rxd_pin 14

void setup() {
  //Serial.begin(Baud Rate, Data Protocol, Txd pin, Rxd pin);
  Serial.begin(115200);                                                   // Define and start serial monitor
  Receiver.begin(115200, SERIAL_8N1, Receiver_Txd_pin, Receiver_Rxd_pin); // Define and start Receiver serial port
}

void loop() {
 while (Receiver.available()) {                         // Wait for the Receiver to get the characters
    float received_temperature = Receiver.parseFloat(); // Display the Receivers characters
    Serial.println(received_temperature);               // Display the result on the serial monitor
  };
  delay(2000);
}
