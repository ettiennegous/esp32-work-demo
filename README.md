# esp32-work-demo
A demo of basic ESP32 usage for a lunch and learn session.  
See branches for the progressive code and wiring diagrams  
[Demo 1](../../tree/demo1) - Basic flashing LED example (Digital Output)  
[Demo 2](../../tree/demo2) - Add button to toggle LED (Digital Input)  
[Demo 3](../../tree/demo3) - Use LDR to detect light and turn it on and off (Analog Input)  

# Overview of the ESP32 / 8266
[History](https://en.wikipedia.org/wiki/ESP8266)  
[Comparison](https://makeradvisor.com/esp32-vs-esp8266/)  

## Discuss  
* [Electrical current](https://dronesrate.com/wp-content/uploads/2018/06/Drone-Infographics-ELECTRICITY-A-visual-cheat-sheet-about-electrical-physics-containing-the-mo.jpg)
* [GPIO pins & Pinout diagram](https://components101.com/sites/default/files/component_pin/ESP32-Pinout.png)  
* Onboard LED
* [Fritzing](https://fritzing.org/home/)
* [Reading resistor values](https://www.arrow.com/en/research-and-events/articles/resistor-color-code)
* [Breadboards](https://www.sciencebuddies.org/Files/7326/6/breadboard-row-connections.png)
* Multimeter
* PWM
* ADC



# IDE Setup
1. Install Arduino IDE
2. Adding ESP32 [board defenitions](https://randomnerdtutorials.com/installing-the-esp32-board-in-arduino-ide-windows-instructions/)



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


