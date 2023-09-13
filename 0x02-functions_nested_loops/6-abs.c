#include "main.h"

/* betty style doc for function main goes there */
/**
 * _abs - computes the absolute value of an integer
 * @n: number to compute
 * Return: absolute value
 */
int	_abs(int n)
{
	int	res;

	res = (n >= 0) ? n : (n * -1);
	return (res);
}

