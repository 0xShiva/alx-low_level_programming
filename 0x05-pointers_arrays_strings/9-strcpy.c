#include "main.h"


/* betty style doc for function main goes there */
/**
 * _strcpy - copy src string in dest string
 * @dest: string to copy to
 * @src: string to copy from
 * Return: pointer to dest string
 */

char	*_strcpy(char *dest, char *src)
{
	int	idx, i;

	idx = -1;
	while (src[++idx])
		;
	i = -1;
	while (++i < idx)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
