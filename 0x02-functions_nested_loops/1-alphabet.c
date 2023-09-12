#include "main.h"

/**
 * print_alphabet - print alphabet using _putchar
 * void function
 */

void	print_alphabet(void)
{
	int	c;

	c = 0x60;
	while (++c < 0x7B)
		_putchar(c);
	_putchar(0xA);
}

