**📌 Overview**

This project demonstrates how to control two LEDs using four push buttons (switches) connected to an Arduino. Each switch triggers a specific LED ON/OFF pattern.

**🛠 Components Required**

Arduino Uno (or compatible board)

Proteus 8

2 × LEDs (any color)

2 × 220Ω resistors

4 × Push buttons

**⚙ Circuit Diagram**

LED1 → Pin 8 → Resistor → GND  
LED2 → Pin 9 → Resistor → GND  

SW1 → Pin 6 → Internal Pull-up Enabled  
SW2 → Pin 5 → Internal Pull-up Enabled  
SW3 → Pin 4 → Internal Pull-up Enabled  
SW4 → Pin 3 → Internal Pull-up Enabled  

**📜 Working Principle**

SW1 Pressed → LED1 ON, LED2 remains OFF.

SW2 Pressed → LED1 OFF, LED2 ON.

SW3 Pressed → LED1 ON, LED2 ON.

SW4 Pressed → LED1 OFF, LED2 OFF.

**🔄 Control Table**


Switch	LED1 State	LED2 State

SW1	ON	OFF

SW2	OFF	ON

SW3	ON	ON

SW4	OFF	OFF

**📎 Notes**

Internal Pull-ups are used, so switches should connect between the input pin and GND.

If you want active HIGH logic, remove INPUT_PULLUP and use external pull-down resistors.

This program is beginner-friendly and ideal for learning digital input handling.



