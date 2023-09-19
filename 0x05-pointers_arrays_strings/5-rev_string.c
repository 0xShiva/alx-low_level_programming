#include "main.h"

/* betty style doc for function main goes there */
/**
 * rev_string - reverse a given string
 * @s: string we want to reverse
 *
 */
void	rev_string(char *s)
{
	int	idx, len, i;
	char	tmp;

	idx = -1;
	while (s[++idx])
		;
	len = idx;
	idx -= 1;
	i = -1;
	while (++i < len / 2)
	{
		tmp = s[i];
		s[i] = s[idx];
		s[idx--] = tmp;
	}
}

