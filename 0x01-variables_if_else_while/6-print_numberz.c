#include <stdio.h>

/**
 * main - Entry point
 * displays numbers from 0 to 9
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0x30;
	while (n >= 0x30 && n <= 0x39)
		putchar(n++);
	putchar(0xA);
	return (0);
}

