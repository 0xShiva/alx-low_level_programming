#include "main.h"

/* betty style doc for function main goes there */
/**
 * puts_half - print half of the given string
 * @str: string we want print
 *
 */
void	puts_half(char *str)
{
	int	idx, i;

	idx = -1;
	while (str && *(str + ++idx))
		;
	idx = (idx - 1) >> 1;
	i = -1;
	while (++i >= idx)
		_putchar(str[i]);
	_putchar(0xA);
}

