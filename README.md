# esp32-work-demo
A demo of basic ESP32 usage for a lunch and learn

# Overview of the ESP32 / 8266
[History](https://en.wikipedia.org/wiki/ESP8266)  
[Comparison](https://makeradvisor.com/esp32-vs-esp8266/)
[Pinout diagram](https://components101.com/sites/default/files/component_pin/ESP32-Pinout.png)
Discuss 
* PWM
* ADC
* GPIO pins
* Onboard LED
* [Fritzing](https://fritzing.org/home/)
* [Reading resistor values](https://www.arrow.com/en/research-and-events/articles/resistor-color-code)


# IDE Setup
1. Install Arduino IDE
2. Adding ESP32 board defenitions
https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/


# Wiring Diagram
                              +------------+
                              |   ESP32    |
                              |            |
           +-----+            |            |
           |    A+---100Ω-----+D27         |
           |LED  |            |            |
           |    C+----- -+----+GND         |
           +-----+       |    |            |
                         |    |            |
                         |    |            |
        +--------+-+10kΩ++    |            |
        |        |            |         D26+---+
        | Button |            |            |   |
+-------+        +------------+3.3V        |   |
|       +--------+            +------------+   |
|                                              |
|                                              |
+----------------------------------------------+


