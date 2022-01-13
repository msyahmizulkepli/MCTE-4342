# Week 8 Examples (Non-Volatile Memory)

## EEPROM (electrically erasable programmable read-only memory) in Arduino

- ATmega328p has an on-chip 1kB EEPROM.
- The memory is byte-addressable (from 0 to 1023).
- There are hardware peripherals for reading and writing EEPROM.
- There are 4 registers to perform read and write operations.

### EEPROM.write

Write a byte to the EEPROM. 

https://www.arduino.cc/en/Reference/EEPROMWrite

### EEPROM.read

Reads a byte from the EEPROM. Locations that have never been written to have the value of 255.

https://www.arduino.cc/en/Reference/EEPROMRead

### EEPROM.update

Write a byte to the EEPROM. The value is written only if differs from the one already saved at the same address.

https://www.arduino.cc/en/Reference/EEPROMUpdate

### EEPROM.put

Write any data type or object to the EEPROM.

https://www.arduino.cc/en/Reference/EEPROMPut

### EEPROM.get

Read any data type or object from the EEPROM.

https://www.arduino.cc/en/Reference/EEPROMGet
