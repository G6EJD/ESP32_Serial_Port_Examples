// Sending/Receiving example

HardwareSerial Sender(1);   // Define a Serial port instance called 'Sender' using serial port 1

HardwareSerial Receiver(2); // Define a Serial port instance called 'Receiver' using serial port 2

#define Sender_Txd_pin 13
#define Sender_Rxd_pin 12

#define Receiver_Txd_pin 27
#define Receiver_Rxd_pin 14

void setup() {
  //Serial.begin(Baud Rate, Data Protocol, Txd pin, Rxd pin);
  Serial.begin(115200);                                                   // Define and start serial monitor
  Sender.begin(115200, SERIAL_8N1, Sender_Txd_pin, Sender_Rxd_pin);       // Define and start Sender serial port
  Receiver.begin(115200, SERIAL_8N1, Receiver_Txd_pin, Receiver_Rxd_pin); // Define and start Receiver serial port
}

void loop() {
  float sensor_temperature = 22.141;                    // Set an example value
  Sender.print(sensor_temperature);                     // Send it to Sender serial port
  while (Receiver.available()) {                        // Wait for the Receiver to get the characters
    float received_temperature = Receiver.parseFloat(); // Display the Receivers characters
    Serial.println(received_temperature);               // Display the result on the serial monitor
  };
  delay(2000);
}
