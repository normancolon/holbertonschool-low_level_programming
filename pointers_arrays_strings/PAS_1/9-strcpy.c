#include "main.h"

/**
 * _strcpy - copies a string from a source to a destination.
 * @dest: the destination string
 * @src: the source string
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len = 0;

	while (*(src + len) != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
