# Robot Radar Scanner

An Arduino-based Robot Radar Scanner that uses an ultrasonic sensor mounted on a servo motor to scan the surrounding environment and detect object distances in real time.

## Features

- Environmental scanning using a servo motor
- Real-time obstacle detection
- Distance measurement with an HC-SR04 ultrasonic sensor
- Continuous radar-style sweep motion
- Live distance data displayed through the Serial Monitor
- Demonstrates fundamental robotics and automation concepts

## Components Used

- Arduino Uno
- HC-SR04 Ultrasonic Sensor
- Micro Servo Motor (SG90)
- Jumper Wires
- Breadboard (optional)

## Pin Connections

| Component | Arduino Pin |
|------------|------------|
| Trig Pin | 5 |
| Echo Pin | 6 |
| Servo Signal | 2 |
| VCC | 5V |
| GND | GND |

## How It Works

The servo motor continuously sweeps the ultrasonic sensor from left to right and back again.

At each angle:

1. The ultrasonic sensor measures the distance to nearby objects.
2. The distance is calculated by the Arduino.
3. The angle and distance are displayed in the Serial Monitor.
4. The process repeats to simulate a radar scanning system.

## Example Output

```text
Angle: 15° | Distance: 42 cm
Angle: 20° | Distance: 39 cm
Angle: 25° | Distance: 36 cm
Angle: 30° | Distance: 34 cm
```

## Project Images

### Circuit Diagram

![Circuit Diagram](images/circuit.png)

### Simulation

![Simulation](images/simulation.png)

## Skills Demonstrated

- Arduino Programming
- Embedded Systems
- Sensor Integration
- Servo Motor Control
- Robotics Fundamentals
- Distance Measurement
- Real-Time Data Processing
- Troubleshooting and Testing

## Future Improvements

- Add LCD display output
- Create a radar visualization interface
- Add obstacle alerts
- Integrate Bluetooth communication
- Expand scanning range with additional sensors

## Source Code

The Arduino source code is located in:

`robot_radar_scanner.ino`

## Author

Shamira Robinson

Computer Engineering Student | Future Robotics Engineer
