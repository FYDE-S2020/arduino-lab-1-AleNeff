Name: Alejandro Neff

EID: ain274

Team Number: ??

## Questions

1. Why does your program need a setup and a loop?

Setup is for initialization, loop is to be run continuously to make your code operate

2. What is the downside to putting all your code in a loop?

It isn't modular to put all the code in a single loop 

3. Why does your code need to be compiled?

The compiler turns the code we write into something the microcontroller can read

4. When lowering the frequency in procedure A, step 4, what is going wrong? Brainstorm some solutions. Dimmers exist in the real world. What is their solution?

The frequency, while it is much lower than 100, isn't quick enough to "trick" our eyes into thinking it's continuously on, so it blinks rather than dims.
A solution would be to hold the duty cycle at a lower value while maintaining a high frequency - manipulating only the duty cycle seemed to leave
the light dimmed without seeing a blink pattern.

5. Why do you need to connect the logic analyzer ground to the ESP32 ground?

Voltage is relative, so the voltage read by the analyzer must be relative to the circuit's ground.

6. What is the difference between synchronous and asynchronous communication?

Synchronous comms require a common clock signal
Asynchronous means they run off of individual specialized clocks.

7. Profile of UART: Sent X bytes in Y time 

    your answer here

8. Profile of SPI: Sent X bytes in Y time

    your answer here

9. Why is SPI so much faster than UART?

    your answer here

10. list one pro and one con of UART

    your answer here

11. list one pro and one con of SPI

    your answer here

12. list one pro and one con of I2C

    your answer here

13. Why does I2C need external resistors to work?

    your answer here

## Screenshots

Procedure A, step 1:
![Put path to your image here ->]("C:\Users\aleji\109K Repos\arduino-lab-1-AleNeff\img\1stLogicScreenshot.jpg")

Procedure A, step 4:
![Put path to your image here ->]("C:\Users\aleji\109K Repos\arduino-lab-1-AleNeff\img\2ndLogicScreenshot.jpg")

Procedure B, UART:
![Put path to your image here ->](img/placeholder.png)

Procedure B, SPI:
![Put path to your image here ->](img/placeholder.png)
