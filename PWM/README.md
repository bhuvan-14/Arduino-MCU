**📌 Overview**

This project demonstrates how to use Pulse Width Modulation (PWM) to gradually increase and decrease an LED’s brightness, creating a fade in–fade out effect.

**🛠 Components Required**

Arduino Uno ,Proteus

Oscilloscope

1 × LED (any color)

1 × 220Ω resistor

Breadboard & jumper wires\

**⚙ Circuit Diagram**

LED → Pin 5 (PWM) → Resistor → GND

**(Make sure the PWM pin supports analogWrite() — on Arduino Uno, pins 3, 5, 6, 9, 10, 11 are PWM capable.)**

**📜 Working Principle**

The analogWrite() function sends a PWM signal to the LED.

In the first loop, wave increases gradually from 0 (OFF) to 255 (fully ON).

In the second loop, wave decreases gradually back to 0.

The cycle repeats, creating a smooth fading effect.

**🔄 Waveform Cycle**

Step	 Value	Effect on Wave

0 → 255	Increasing	Fading IN

255 → 0	Decreasing	Fading OUT


**📎 Notes**

The delay(10) controls fade speed — smaller values make faster fading, larger values make slower fading.

PWM doesn’t change voltage directly; it switches it on and off rapidly to simulate dimming.

Works on any PWM-capable pin.
