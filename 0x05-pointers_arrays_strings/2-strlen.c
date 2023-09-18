#include "main.h"

/* betty style doc for function main goes there */
/**
 * _strlen - compute the length of a string
 * @s: string we want to compute it length
 * Return: length
 */
int _strlen(char *s)
{
	char	*p;

	p = s;
	while (s && *s)
		s++;
	return (s - p);
}

