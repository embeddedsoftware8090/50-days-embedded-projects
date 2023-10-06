#include <reg51.h>

#define LED_PORT P1

void delay_ms(unsigned int milliseconds) {
    unsigned int i, j;
    for (i = 0; i < milliseconds; i++) {
        for (j = 0; j < 120; j++) {
            // Adjust this inner loop delay based on your clock frequency
        }
    }
}

void main(void) {
    unsigned char i;

    // Set LED port as output
    LED_PORT = 0x00;

    // Infinite loop
    while (1) {
        // For each LED
        for (i = 0; i < 10; i++) {
            // Turn on the LED
            LED_PORT |= (1 << i);
            delay_ms(1000); // Delay for 1 second

            // Turn off the LED
            LED_PORT &= ~(1 << i);
            delay_ms(1000); // Delay for 1 second
        }
    }
}
