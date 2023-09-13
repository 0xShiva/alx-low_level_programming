#include "main.h"

/* betty style doc for function main goes there */
/**
 * print_last_digit - get last digit of a given number then print it
 * @n: number to compute
 * Return: last digit
 */

int print_last_digit(int n)
{
	long long	res;

	if (n < 0)
		n *= -1;
	res = n % 0xA;
	_putchar(res + 0x30);
	return ((int)res);
}
