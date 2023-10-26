#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant byte
 * @s: the memory area
 * @b: the byte to fill with
 * @n: the number of bytes to fill
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
