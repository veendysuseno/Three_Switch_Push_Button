# Three_Switch_Push_Button

This Arduino project uses three push buttons to control three separate LEDs. Each button controls one LED, turning it on when the button is pressed and off when the button is released.

## Components

- **LEDs**: Three LEDs connected to pins 10, 11, and 12.
- **Push Buttons**: Three push buttons connected to pins 2, 4, and 6.
- **Resistors**: Appropriate resistors for the buttons (internal pull-up resistors are used).

## Code Overview

1. **Setup**:

   - Initializes the LED pins as outputs and the button pins as inputs.
   - Configures the button pins with internal pull-up resistors.

2. **Loop**:
   - Reads the state of each button.
   - Turns the corresponding LED on if the button is pressed (HIGH), and off if the button is not pressed (LOW).

## Code

```cpp
/* Tiga Saklar Tekan Push Button Untuk mengontrol masing-masing satu LED */

int inputPins[] = {2, 4, 6}; // Buat array untuk 3 pin input
int ledPins[] = {10, 11, 12}; // Buat array untuk pin output LED

void setup() {
    for (int index = 0; index < 3; index++) {
        pinMode(ledPins[index], OUTPUT); // Set LED sebagai output
        pinMode(inputPins[index], INPUT); // Set saklar tekan sebagai input
        digitalWrite(inputPins[index], HIGH); // Pull-up resistors
    }
}

void loop() {
    for (int index = 0; index < 3; index++) {
        int val = digitalRead(inputPins[index]); // Baca nilai input
        if (val == HIGH) { // Cek jika saklar ditekan
            digitalWrite(ledPins[index], HIGH); // LED ON jika saklar ditekan
        } else {
            digitalWrite(ledPins[index], LOW); // LED OFF
        }
    }
}
```

## Usage

1. Setup: Connect three LEDs to pins 10, 11, and 12, and three push buttons to pins 2, 4, and 6 on the Arduino. The buttons should be configured with internal pull-up resistors.

2. Run: Upload the code to the Arduino. Press each button to control the corresponding LED.
