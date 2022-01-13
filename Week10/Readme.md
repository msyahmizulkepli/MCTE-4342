# Week 10 Examples 
## Example 1 

An LED is attached to PB5 of ATmega328p. Use the Blinky class to flash the LED (1s ON and 1s OFF).

<details>
<summary>CIRCUIT DIAGRAM</summary>
<img src="https://github.com/msyahmizulkepli/MCTE-4342/blob/main/Week10/Example1/Example%201.jpg">
</details>


## Example 2 

Use the Blinky class to generate a PWM waveform at PB5 with on time 200us and off time 300us.


## Example 3

Use the Blinky class to generate a PWM waveform at PB5 with on time 100us and off time 200us.


## Example 4

Use the DCMotor class to generate a 50Hz PWM waveform at PB0. Keep the duty cycle constant at 50%.


## Example 5

Use the DCMotor class to generate a 1kHz waveform at PB0. Keep the duty cycle constant at 20%.


## Example 6 

4 DC Motors are connected to PB0, PB1, PB2 and PB3 of ATmega328p via NPN transistors. Use the DCMotor class to drive these motors with PWM frequency of 500Hz with the following duty cycles:
- The motor attached to PB0: 20%
- The motor attached to PB1: 40%
- The motor attached to PB2: 60%
- The motor attached to PB3: 80%


## Example 7

4 DC Motors are connected to PB0, PB1, PB2 and PB3 of ATmega328p via NPN transistors. Use the DCMotor class to drive these motors with PWM frequency of 1kHz with the following duty cycles:
- The motor attached to PB0: 20%
- The motor attached to PB1: 40%
- The motor attached to PB2: 60%
- The motor attached to PB3: 80%


## Example 8

The speed of a DC motor can be continuously adjusted as part of a control system. Assume that PID class and Sensor class exist.


## Example 9

4 servo motors (signal pins) are attached to PB0, PB1, PB2 and PB3 of ATmega328p. Assume that these servos require pulse width of 1.5ms to turn 90˚. Use our servo class to make these servos turn 90˚.


## Example 10

A signal pin of a servo motor is attached to PB0 of ATmega328p. Write a program to make the servo rotate back and forth (sweeping) with the following parameters:
- Minimum pulse width = 544us
- Maximum pulse width = 2400us
- Step size = 10us
- Delay = 25ms