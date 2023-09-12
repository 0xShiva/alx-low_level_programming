#include "main.h"

/* betty style doc for function main goes there */
/**
 * _isalpha - checks the alphabetic character
 * @c: char to check
 * Return: 1 if letter 0 if not
 */

int	_isalpha(int c)
{
	return ((c > 0x40 && c < 0x5B) || (c > 0x60 && c < 0x7B));
}

