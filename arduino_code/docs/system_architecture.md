# System Architecture

The IoT Smart Farming System is designed to monitor environmental conditions in agricultural fields using sensors and cloud technology.

## Components

- Arduino UNO
- Soil Moisture Sensor
- Temperature Sensor
- Motion Sensor
- ESP Module for WiFi communication
- ThingSpeak Cloud Platform

## Workflow

1. Sensors collect environmental data from the farm.
2. Arduino processes the sensor readings.
3. ESP module sends the data to the ThingSpeak cloud.
4. Farmers can monitor real-time data through a dashboard.

## Data Flow

Sensors → Arduino → ESP Module → ThingSpeak Cloud → User Dashboard
