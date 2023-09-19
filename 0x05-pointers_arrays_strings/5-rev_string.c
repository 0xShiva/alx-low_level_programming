#include "main.h"

/* betty style doc for function main goes there */
/**
 * rev_string - reverse a given string
 * @s: string we want to reverse
 *
 */
void	rev_string(char *s)
{
	int	idx, len;
	char	tmp;

	idx = -1;
	while (s[++idx])
		;
	len = idx;
	idx -= 1;
	for (int i = 0; i < idx / 2; i++)
	{
		tmp = s[i];
		s[i] = s[idx - 1];
		s[idx-- - 1] = tmp;
	}
}

