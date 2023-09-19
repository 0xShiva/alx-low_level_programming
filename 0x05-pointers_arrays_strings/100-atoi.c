#include "main.h"


#define MAXLLONG 0x7FFFFFFFFFFFFFFF

/* betty style doc for function main goes there */
/**
 * _atoi - convert string to intger
 * @s: string to convert
 * Return: converted string as integer
 */

int	_atoi(char *s)
{
	size_t	num;
	int		sign;

	num = 0;
	sign = 1;
	while ((*s >= 0x09 && *s <= 0xD) || *s == 0x20)
		s++;
	if (*(s) == 0x2B || *(s) == 0x2D)
	{
		if (*(s) == 0x2D)
			sign *= -0x1;
		s++;
	}
	while (*(s) && (*s > 0x2F && *s < 0x3A))
	{
		num = num * 0xA;
		num += (*(s) - 0x30);
		s++;
	}
	if (sign == -1 && num > 0x7FFFFFFFFFFFFFFF)
		return (0x0);
	else if (sign == 1 && num > 0x7FFFFFFFFFFFFFFF)
		return (-0x1);
	return ((int)num * sign);
}

