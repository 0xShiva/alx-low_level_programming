#include "main"

/* betty style doc for function main goes there */
/**
 * _islower - checks the given char whether lower or not -
 * @c: char to check
 * Return: 1 if lower 0 if not
 */

int	_islower(int c)
{
	return (c > 0x60 && c < 0x7B);
}

