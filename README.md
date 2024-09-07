---

# Temperature and Humidity Monitoring System

This repository contains the code for a temperature and humidity monitoring system using an Arduino, DHT sensor, and an LCD screen. The data is sent via Bluetooth to a mobile app created with MIT App Inventor for remote monitoring.

![Uploading Temperature and Humidity Monitoring System using Arduino, dht11 and hc-05 bluetooth module.jpg…]()



## Features

- **Temperature & Humidity Monitoring**: Uses a DHT sensor to measure temperature and humidity.
- **LCD Display**: Displays real-time temperature and humidity on a 16x2 LCD.
- **Bluetooth Transmission**: Sends temperature and humidity data to a mobile application using Bluetooth.
- **MIT App Inventor Compatibility**: Data can be read and displayed on a mobile app developed in MIT App Inventor.
  
## Hardware Components

1. **Arduino**: Microcontroller used to run the system.
2. **DHT11/DHT22 Sensor**: Measures temperature and humidity.
3. **16x2 I2C LCD Display**: Displays real-time data.
4. **Bluetooth Module (HC-05/HC-06)**: Sends data to the mobile app.
5. **Wires and Breadboard**: For connections.

## Software Libraries

- **Arduino IDE**: Required to upload the code.
- **SoftwareSerial.h**: To establish serial communication with the Bluetooth module.
- **Wire.h**: For I2C communication with the LCD.
- **LiquidCrystal_I2C.h**: Controls the 16x2 I2C LCD.
- **dht.h**: DHT sensor library for reading temperature and humidity data.

## Setup

1. **Wiring**:
   - Connect the DHT sensor's `VCC` to 5V and `GND` to GND.
   - Connect the DHT sensor's `Data` pin to analog pin A2 of the Arduino.
   - Connect the Bluetooth module's `TX` to Arduino's digital pin 8 and `RX` to digital pin 9.
   - Connect the I2C LCD to the appropriate `SDA` and `SCL` pins of the Arduino.

2. **Uploading Code**:
   - Open the Arduino IDE.
   - Install the required libraries (`LiquidCrystal_I2C.h`, `SoftwareSerial.h`, and `dht.h`).
   - Upload the provided code to the Arduino.

3. **Mobile App**:
   - Develop a mobile app using MIT App Inventor.
   - Use the Bluetooth connection to receive temperature and humidity data.

## Code Overview

### Main Code (`Temperature_Humidity_Monitor.ino`)
- Initializes the LCD and Bluetooth connection.
- Reads temperature and humidity data from the DHT sensor.
- Displays the data on the LCD and sends it via Bluetooth to the mobile app.

### DHT Library (`dht.cpp` and `dht.h`)
- Implements the functions to read data from the DHT11/DHT22 sensor.
- Handles data conversion, checksum validation, and communication with the Arduino.

## How to Use

1. Power on the Arduino and ensure the DHT sensor is connected.
2. Monitor the temperature and humidity values on the LCD.
3. Use the MIT App Inventor app to remotely view the data via Bluetooth.

## Future Improvements

- Add Wi-Fi capabilities for remote monitoring over the internet.
- Integrate data logging functionality for long-term monitoring.
- Add alarms or notifications when certain thresholds are reached.

---
