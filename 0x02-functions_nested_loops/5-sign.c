#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_sign - checks the sign of number
 * @n: number to check
 * Return: 1 if sign pos 0 if n = 0 and -1 if sign is nigative
 */

int	print_sign(int n)
{
	if (!n)
	{
		_putchar(0x30);
		return (n);
	}
	else if (n > 0)
	{
		_putchar(0x2B);
		return (1);
	}
	else
	{
		_putchar(0x2D);
		return (-1);
	}
}

