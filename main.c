#define F_CPU   16000000
#include <util/delay.h>
#include <avr/io.h>

int main(void) 
{
	// Configuração do pino PB5 (13 no Arduino Uno) como saída
	DDRB  |=  (1<<5);		// Direção: Saída

	// Inicialização do nível lógico no pino PB5
	PORTB &= ~(1<<5);		// PB5 = 0

    while (1) 				// Loop infinito
    {
		PORTB |=  (1<<5);	// PB5 = 1
		_delay_ms(500);		// Atraso de 500ms

		PORTB &= ~(1<<5);	// PB5 = 0
		_delay_ms(500);		// Atraso de 500ms
    }
}
