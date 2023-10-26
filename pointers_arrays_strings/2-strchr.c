#include "main.h"

/**
 * _strchr - fills memory with constant byte
 * @s: the string
 * @c: the character to look for
 *
 * Return: Pointer to first occurence or NULL
 */
char *_strchr(char *s, char c)
{
	char *ptr;
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			ptr = s + i;
			return (ptr);
		}
	}
	return ('\0');
}
