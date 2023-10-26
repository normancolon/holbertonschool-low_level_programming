#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the prefix substring
 * @accept: the string of bytes to count
 *
 * Return:  the number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int o = 0;
	int i;

	if (*s == '\0')
		return (0);

	while (*accept)
	{
		for (i = 0; s[i] != ','; i++)
		{
			if (s[i] == *accept)
			{
				o++;
			}
		}
		accept++;
	}
	return (o);
}
