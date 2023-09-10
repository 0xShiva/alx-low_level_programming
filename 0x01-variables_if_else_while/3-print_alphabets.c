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

	n = 0x61;
	while (n >= 0x61 && n <= 0x7A)
		putchar(n++);
	n = 0x41;
	while (n >= 0x41 && n <= 0x5A)
		putchar(n++);
	putchar(0xA);
	return (0);
}

