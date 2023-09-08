#include <unistd.h>

/**
 * main - Entry point
 * prints a quote within write function
 * ssize_t write(int fd, const void *buf, size_t count);
 * fd=> file discriptor we want to write in
 * buf=> the string we want to write
 * count => number of byte(s) we want to write
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
