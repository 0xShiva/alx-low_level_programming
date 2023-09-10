#include <stdio.h>

/**
 * main - Entry point
 * displays alphabet in lower_case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0x61;
	while (n >= 0x61 && n <= 0x7A)
	{
		if (n == 0x65 || n == 0x71)
		{
			n++;
			continue;
		}
		putchar(n++);
	}
	putchar(0xA);
	return (0);
}

