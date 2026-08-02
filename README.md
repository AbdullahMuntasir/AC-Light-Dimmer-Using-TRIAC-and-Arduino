# AC-Light-Dimmer-Using-TRIAC-and-Arduino
An Arduino Uno-based AC light dimmer using phase-angle control. A PC817 optocoupler detects zero crossings from the rectified DC supply, triggering an interrupt on pin 2. The Arduino then delays based on a potentiometer reading before firing a BTA16 TRIAC via a MOC3021 driver, controlling lamp brightness smoothly and safely.
