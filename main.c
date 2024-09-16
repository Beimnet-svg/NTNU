#include <avr/delay.h>
#include <util/delay.h>

#define F_CPU 4915200

int main() {
  DDRA = 0xFF;
  DDRE = 0b10; 

  PORTE = 0b10; 
  PORTA = 0b000001;

  _delay_ms(2000); 

  PORTE = 0b00;

  _delay_ms(2000);

  PORTA = 0b01010101;

  _delay_ms(2000);

  PORTE = 0b10; 
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
