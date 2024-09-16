#include <stdio.h>
#ifndef UART_H
#define UART_H

void uart_Init(unsigned int ubrr);
int uart_Transmit(char data, FILE * file );
int uart_Receive(FILE * file);

#endif
