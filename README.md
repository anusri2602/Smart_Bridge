🔧 About the Project
This Arduino project demonstrates how to control two servo motors using a digital input pin. When the input signal is detected (e.g., from a button, sensor, or external device), both servos rotate to 180 degrees. When the input is not active, the servos return to 0 degrees. It's a simple, practical example of how digital signals can trigger mechanical movement using servos.
This setup is useful in various basic automation tasks, such as:
.Opening/closing a gate
.Activating a robotic arm
.Responding to sensor input (e.g., IR sensor, proximity detector)
⚙️ How It Works
.A digital pin (D1) is used as an input to read signals.
.Two servo motors are connected to pins D2 and D3.
.When the input is HIGH (1), both servo motors rotate to 180°.
.When the input is LOW (0), both servos return to 0°.
.A serial monitor is initialized at 9600 baud rate (for debugging if needed).
The core logic is handled in the loop() function, which continuously checks the state of the input pin and updates the servo positions accordingly.
🧰 Concepts Used
This project helps you learn and practice:
.Servo motor control using the Servo library
.Digital input handling using digitalRead()
.Pin configuration with pinMode()
.Real-time control based on external signals
.Simple conditional logic in embedded systems
