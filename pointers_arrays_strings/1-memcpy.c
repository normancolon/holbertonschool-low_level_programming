#include "main.h"
#include <stdio.h>

/**
 * _memcpy - fills memory with constant byte
 * @dest: the destination area
 * @src: the source area
 * @n: the number of bytes to fill
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
