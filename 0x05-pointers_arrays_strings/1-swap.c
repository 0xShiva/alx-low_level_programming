#include "main.h"
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * swap_int - swap value of two intgers
 * @a: pointer to an int
 * @b: pointer to an int
 */
void	swap_int(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

