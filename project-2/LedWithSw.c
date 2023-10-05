#include <reg51.h>
// Define the LED and switch pins
sbit LED = P1^0;     // Assuming the LED is connected to pin P1.0
sbit SWITCH = P2^0;  // Assuming the switch is connected to pin P2.0

void delay(unsigned int time_ms)// this is delya function 
{
    unsigned int i, j;
    for(i = 0; i < time_ms; i++)
        for(j = 0; j < 112; j++);  // Adjust this value for the desired delay
}

void main()
{
    LED = 0;           // Initially turn off the LED
    SWITCH = 1;        // Set the switch pin as input with pull-up resistor

    while(1)
    {
        if (SWITCH == 0)  // Check if the switch is pressed (logic 0)
        {
            LED = 1;      // Turn on the LED
            delay(100);   // Delay to debounce the switch (adjust as needed)
            while (SWITCH == 0);  // Wait for the switch to be released
            LED = 0;      // Turn off the LED
        }
    }
}
