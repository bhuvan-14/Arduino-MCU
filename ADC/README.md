**📌 Overview**

This project demonstrates how to read an analog input from a sensor or potentiometer using the Arduino’s ADC (Analog-to-Digital Converter) and display the value on a 16×2 LCD.

**🛠 Components Required**

Arduino Uno ,Proteus

16×2 LCD (HD44780 compatible)

1 × 10kΩ potentiometer (for ADC input)

Breadboard & jumper wires

**⚙ Circuit Diagram**
**LCD Pins:**

RS → Pin 12  

EN → Pin 11  

D4 → Pin 5  

D5 → Pin 4  

D6 → Pin 3  

D7 → Pin 2  

**ADC Input:**
A3 → Middle pin of potentiometer  

Left pin → 5V  

Right pin → GND

**📜 Working Principle**

The Arduino’s analogRead() function reads a voltage from pin A3 (0–5V).

This voltage is converted to a digital value (0–1023) by the ADC.

The result is displayed on the LCD .

The delay(500) refreshes the value twice per second.

**🔢 ADC Conversion Formula**

If using a 5V reference:

**Voltage = (adcValue × 5.0) / 1023**


You can add this calculation to display actual voltage instead of raw ADC values.

**📎 Notes**

Make sure to connect a 10kΩ potentiometer to the ADC pin for testing.

Adjust LCD contrast using a 10kΩ potentiometer on the V0 pin.

This example can be extended to display sensor readings like temperature, light intensity, etc
