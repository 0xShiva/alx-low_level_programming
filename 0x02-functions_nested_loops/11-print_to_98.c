#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_to_98 - sum up the value of two integers
 * @n: the value from which we start printing
 */
void	print_to_98(int n)
{
	while (n < 99)
	{
		if (n < 10)
			_putchar(n + 0x30);
		else
		{
			_putchar((n / 0xA) + 0x30);
			_putchar((n % 0xA) + 0x30);
		}
		n++;
	}
	_putchar(0xA);
}

