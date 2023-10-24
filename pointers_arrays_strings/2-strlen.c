#include "main.h"

/**
 * _strlen - calculates the length of the string.
 * @s: the string
 * Return: length of string.
 */

int _strlen(char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}
