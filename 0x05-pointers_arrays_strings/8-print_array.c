#include "main.h"
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * print_array - print values in array
 * @a: pointer to an array
 * @n: n elements to print
 */
void	print_array(int *a, int n)
{
	int start;

	start = -1;
	while (++start < n)
	{
		if (!start)
			printf("%d", *(a + start));
		else
			printf(", %d", *(a + start));
	}
	printf("\n");
}

