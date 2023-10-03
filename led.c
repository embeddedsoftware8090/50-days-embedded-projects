#include <reg51.h>  // Include the AT89C51 register definitions

// Define the LED pin
sbit LED = P1^0;    // Assuming the LED is connected to pin P1.0

void delay(unsigned int time_ms)
{
    unsigned int i, j;
    for(i = 0; i < time_ms; i++)
        for(j = 0; j < 112; j++);  // Adjust this value for the desired delay
}

void main()
{
    // Initialize the LED pin as an output
    LED = 0;    // Initially turn off the LED

    while(1)
    {
        // Turn the LED on
        LED = 1;

        // Delay for some time
        delay(1000); // Delay for 1 second

        // Turn the LED off
        LED = 0;

        // Delay for some time
        delay(1000); // Delay for 1 second
    }
}
