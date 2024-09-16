/*#include <avr/io.h>
#include <avr/delay.h>
#include <stdint.h>
#include <stdio.h>

#define F_CPU 4915200

int main() {
  DDRA = 0xFF;
  DDRE = 0b10; 
  PORTE = 0b10; 
  PORTA = 0b0000001;

while(1)
{
  
PORTA = 0b000000;
  _delay_ms(2000); 

PORTA = 0b000001;

  _delay_ms(2000);

}
  return 0;

}
   // uart_Init (MYUBRR);
    /*while(1)
    {
        printf("Beimnet Ogbeab");
        _delay_ms(2000);
    }*/
    /*while(1)
    {
        uart_Transmit('a');
        _delay_ms(200);
    }*/
   /*printf("\n\rEnter a String:");
   while(1)
   {
        char input_string[100];
        printf("\n\rEnter a String:");
        scanf("%s",input_string);
        printf("\n\rYou entered: %s\n\r", input_string);
    }    */
#include <avr/io.h>
#include "uart.h"
#include "sram.h"

#define FOSC 4915200 // Clock Speed
#define BAUD 9600
#define MYUBRR FOSC/16/BAUD-1 // 31


void main(void) {
  uart_Init(MYUBRR); //Ikke noe nytt her. Samme som i lab1
  SRAM_init(); //Kokt fra labforelesning
  SRAM_test(); //Kokt fra oppgaveteksten
}