
#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: pointer to substring
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *x = haystack;
		char *y = needle;

		while (*haystack == *y && *y != 0 && *haystack != 0)
		{
			haystack++;
			y++;
		}
		if (*y == 0)
			return (x);
		haystack = ++x;
	}
	return (0);
}
