#include "main.h"

/* betty style doc for function main goes there */
/**
 * jack_bauer - prints every minute of the day
 */
void	jack_bauer(void)
{
	int	hour, min;

	hour = -1;

	while (++hour < 0x18)
	{
		min = -1;
		while (++min < 0x3C)
		{
			_putchar((hour / 0xA) + 0x30);
			_putchar((hour % 0xA) + 0x30);
			_putchar(':');
			_putchar((min / 0xA) + 0x30);
			_putchar((min % 0xA) + 0x30);
			_putchar(0xA);
		}
	}
}

