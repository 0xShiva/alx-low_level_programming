#include "main.h"

/* betty style doc for function main goes there */
/**
 * puts2 - print every other character
 * @str: string we want to reverse
 *
 */
void	puts2(char *str)
{
	int	idx;

	idx = 0;
	while (str && *(str + idx))
	{
		if (!(idx % 2))
			_putchar(str[idx]);
		idx++;
	}
	_putchar(0xA);
}

