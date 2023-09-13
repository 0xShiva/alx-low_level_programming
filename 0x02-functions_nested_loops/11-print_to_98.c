#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * print_to_98 - sum up the value of two integers
 * @n: the value from which we start printing
 */
void	print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			if (n < 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n++;
		}
	}
	else
	{
		while (n > 97)
		{
			if (n > 98)
				printf("%d, ", n);
			else
				printf("%d\n", n);
			n--;
		}
	}
}

