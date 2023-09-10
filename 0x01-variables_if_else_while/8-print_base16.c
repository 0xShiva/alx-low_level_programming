#include <stdio.h>

/**
 * main - Entry point
 * displays alphabet in lower_case
 * then in upper_case
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 0x30;
	while (n >= 0x30 && n <= 0x39)
		putchar(n++);
	n = 0x61;
	while (n >= 0x61 && n <= 0x66)
		putchar(n++);
	putchar(0xA);
	return (0);
}

