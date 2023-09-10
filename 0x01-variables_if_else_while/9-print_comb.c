#include <stdio.h>

/**
 * main - Entry point
 * displays alphabet in lower_case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0x30;
	while (n >= 0x30 && n <= 0x39)
	{
		putchar(n++);
		if (n <= 0x39)
		{
			putchar(0x2C);
			putchar(0x20);
		}
	}
	putchar(0xA);
	return (0);
}

