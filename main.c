/*
 * File:   main.c
 * Author: emad95
 *
 * Created on April 7, 2020, 11:20 PM
 */


#include <avr/io.h>
# define buzzer 3
int main(void) {
    /* Replace with your application code */
    DDRA |= (1<<buzzer);
    PORTA |= (1<<buzzer);
    while (1) {
    }
}
