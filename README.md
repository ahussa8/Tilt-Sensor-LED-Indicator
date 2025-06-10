# Tilt Sensor LED Indicator – ME331 Project 1

This project implements a tilt-sensing circuit using a pull-up resistor configuration on an Arduino. It reads input from a tilt sensor and uses code to control two LEDs based on tilt state.

## 🛠️ Components

- Arduino Uno
- Tilt sensor (digital switch type)
- 2 LEDs (Green and Red)
- 2 resistors (220–330Ω for LEDs)
- 1 resistor (10kΩ for initial pull-up configuration)
- Breadboard and jumper wires

## 🔄 How It Works

- The tilt sensor is wired with a **10kΩ pull-up resistor**, making the signal HIGH when not tilted.
- The Arduino reads the digital state of the tilt sensor.
- A green LED lights when the sensor reads "NO TILT" (HIGH).
- A red LED lights when the sensor reads "TILT" (LOW).
- Once verified, the external pull-up resistor is removed and replaced with Arduino’s built-in pull-up via `pinMode(sensorPin, INPUT_PULLUP)`.

## 🔢 Circuit Logic

- Tilt sensor is connected to a digital input pin.
- LEDs are wired independently to two other digital output pins.
- The code uses `digitalRead()` to check the sensor state and controls LEDs and serial output accordingly.

## 🧪 Features

- ✅ Serial monitor outputs "TILT" or "NO TILT" for real-time feedback.
- ✅ LED indicators change state depending on tilt.
- ✅ Arduino internal pull-up resistor used for streamlined design.

## 📂 Submission Files

- `tilt_sensor_project.ino`: Arduino sketch
- `demo_video.mp4`: Demo of the working circuit, including serial monitor output

## 📷 Circuit Setup

- **Sensor pin** → Digital pin 2 (with pull-up)
- **Green LED** → Digital pin 9
- **Red LED** → Digital pin 10

## 📌 Notes

- No debounce logic was added per project guidelines.
- Verified functionality using serial monitor before integrating LEDs.
