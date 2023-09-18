#include "main.h"

/* betty style doc for function main goes there */
/**
 * _puts - prints a string on the stdout
 * @str: string we want to print
 *
 */
void	_puts(char *str)
{
	while (str && *str)
	{
		_putchar(*str);
		str++;
	}
	_putchar(0xA);
}

