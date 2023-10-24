#include "main.h"

/**
 * rev_string - puts a string to stdout reversed
 * @s: the string
 *
 * Return: void
 */

void rev_string(char *s)
{
	int len = 0;
	int up, down;

	while (*(s + len) != '\0')
		len++;
	len--;

	for (up = 0, down = len; up < down; up++, down--)
	{
		char temp = *(s + up);
		*(s + up) = *(s + down);
		*(s + down) = temp;
	}
}

