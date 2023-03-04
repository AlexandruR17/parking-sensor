# Parking Sensor
![logo](https://babydrive.com.au/wp-content/uploads/2018/06/Parking-sensors.jpg)
"Parking Sensor" is a project made in C++ for Arduino UNO boards.
 
With the necessary physical components or using the TinkerCAD virtual environment, we can simulate the functionality of a real parking sensor.

## Requirements

For the functionality of the circuit, we need the following components:

```cpp
[Component - Quantity]
Arduino Uno R3  - 1
Breadboard - 1 or 2
MCP23008-based, 32 LCD 16 x 2 (I2C) - 1
Ultrasonic Distance Sensor - 1
Green LED - 2
Orange LED - 3
Red LED - 2
220 Ω Resistor - 8
Piezo or Buzzer - 1
```

## Installation
This project can be installed according to the following scheme:
![scheme](https://i.imgur.com/RmstXj4.png)
where(from left to right)
```cpp
[Component = Digital Pin]
Led 1 Green = 13
Led 2 Green = 12

Led 1 Orange = 11
Led 2 Orange = 10
Led 3 Orange = 9

Led 1 Red = 6
Led 2 Red = 5

Piezo = 3

Ultrasonic Distance Sensor = 7  
```
![scheme2](https://i.imgur.com/X5J5jFY.png)
For the electronic LCD, we need to install the library:
```cpp
Adafruit_LiquidCrystal.h
```

## How does it work?
The object is detected by the ultrasonic sensor, which further transmits the distance between the sensor and the object to the LCD, and, depending on the degree of danger, the LEDs light up and the buzzer changes frequency.
![ss1](https://i.imgur.com/zuSKlA7.png)
![ss2](https://i.imgur.com/AHUBby6.png)
![image](https://user-images.githubusercontent.com/121444745/222923408-c33769ba-38af-448d-886b-1764e159c22d.png)

## Contributing

Pull requests are welcome. For major changes, please open an issue first
to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License

[MIT](https://choosealicense.com/licenses/mit/)
