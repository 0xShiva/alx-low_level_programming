#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_alphabet - print alphabet from a to z follwed by new line
 * void function
 */
void    print_alphabet(void)
{
	int     c;

	c = 0x60;
	while (++c < 0x7B)
		_putchar(c);
	_putchar(0xA);
}

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - 10 times -
 * void function
 */
void	print_alphabet_x10(void)
{
	int	n;

	n = 10;
	while (n--)
		print_alphabet();
}
