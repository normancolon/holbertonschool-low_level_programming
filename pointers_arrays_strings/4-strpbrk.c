#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: the string
 * @accept: the string of bytes to count
 *
 * Return:  the number of bytes
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (j = 0; s[j]; j++)
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[j] == accept[i])
			{
				return (s + j);
			}
		}
	}
	return ('\0');
}
