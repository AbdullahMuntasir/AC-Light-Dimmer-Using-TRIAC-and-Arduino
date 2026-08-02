# AC-Light-Dimmer-Using-TRIAC-and-Arduino
An Arduino Uno-based AC light dimmer using phase-angle control. A PC817 optocoupler detects zero crossings from the rectified DC supply, triggering an interrupt on pin 2. The Arduino then delays based on a potentiometer reading before firing a BTA16 TRIAC via a MOC3021 driver, controlling lamp brightness smoothly and safely.


This project presents the design and implementation of an Arduino Uno-based AC light dimmer circuit capable of controlling the brightness of a 220V AC incandescent lamp. The system uses
phase-angle control technique to regulate the power delivered to the load. A zero-crossing detector circuit built around the PC817 optocoupler detects each AC zero crossing and sends a
signal to the Arduino on digital pin 2. Upon receiving this interrupt signal, the Arduino introduces a programmable delay before firing the BTA16 TRIAC through a MOC3021
optoisolated TRIAC driver. The phase delay is controlled by a potentiometer connected to the analog pin A0 of the Arduino. The circuit ensures complete galvanic isolation between the
high-voltage AC mains side and the low-voltage Arduino control side, making the design both safe and reliable. The project demonstrates the fundamental principles of TRIAC-based power
control, interrupt-driven programming, and optocoupler isolation techniques widely used in industrial and domestic lighting control applications.
