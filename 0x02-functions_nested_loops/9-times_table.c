#include "main.h"

/* betty style doc for function main goes there */
/**
 * times_table - prints the 9 times table
 */
void	times_table(void)
{
	int	x, y, z;

	x = -1;
	while (++x < 0xA)
	{
		y = -1;
		while (++y < 0xA)
		{
			z = x * y;
			if (!y)
				_putchar(z + 0x30);
			if (z < 0xA && y)
			{
				_putchar(',');
				_putchar(0x20);
				_putchar(0x20);
				_putchar(z + 0x30);
			}
			else if (z >= 10)
			{
				_putchar(',');
				_putchar(0x20);
				_putchar((z / 0xA) + 0x30);
				_putchar((z % 0xA) + 0x30);
			}
		}

		_putchar(0xA);
	}
}

