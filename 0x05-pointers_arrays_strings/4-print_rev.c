#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_rev - prints a string in reverse
 * @s: string we want to print
 *
 */
void	print_rev(char *s)
{
	int	idx;

	idx = -1;
	while (s[++idx])
		;
	while (idx-- >= 0)
		_putchar(s[idx]);
	_putchar(0xA);
}

