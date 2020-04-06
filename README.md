# ESP32_Serial_Port_Examples
Examples setting up and using the serial ports

The example 'ESP32_Serial_Loopback_Example.ino' is a simple loop back test where the ESP32 sends data to itself from Port-1, where it is received on Port-2 and then displayed on the serial monitor port.

The example 'ESP32_Serial_Port_Example.ino' is a dual sender and receiver code example, using a single ESP32, you an send and receive data using the same (one) ESP32 relying on the internal ESP32 UART data buffers to make this a simple exercise to conduct, define the pins as required in your test application.

The example 'ESP32_Serial_Sender_Example.ino' sends a constant value to its serial port, define the pins as required in your application.

The example 'ESP32_Serial_Receiver_Example.ino' receives data as floating points on its serial port, define the pins as required in your application.

REMEMBER: you must cross-connect Txd on (ESP32-1) to Rxd on (ESP32-2) and Rxd (ESP32-1) to Txd on (ESP32-2)

You can use any pin that can be an Output for a Txd pin (0-27) and any pin that can be an Input for Rxd (0-39)
