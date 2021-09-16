/* SUHAS K PROGRAM 1*/

#include<avr/io.h>
#include<util/delay.h>
#include"act1.h"
 void act1()
 {
     DDRD &= ~(1<<PD0);/*INPUT PIN PORT D PIN 0*/
     DDRD &= ~(1<<PD1);/*INPUT PIN PORT D PIN 1*/


     /*GIVING LOGIC HIGH FOR THE INPUT PINS*/
     PORTD |= (1<<PD0);
     PORTD |= (1<<PD1);
     /*GIVING THE OUTPUT AT PIN0 PORT B*/
     DDRB |= (1<<PB0);

     if ((!(PIND & (1<<PD0))) & (!(PIND & (1<<PD1))))
     {
         PORTB |= (1<<PB0);  /* IF  THE BOTH CONDITION IS TRUE AND TURN ON LED */
         _delay_ms(1000);
     }
     else
     {
        PORTB &= ~(1<<PB0); /*IF ANY ONE CONDITION IS TRUE TURN OFV THE LED*/
        _delay_ms(1000);
     }

 }
