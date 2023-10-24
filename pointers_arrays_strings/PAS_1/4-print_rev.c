
#include "main.h"

/**
 * print_rev - puts a string to stdout reversed
 * @s: the string
 *
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
	{
		len++;
	}

	len--;

	while (len >= 0)
	{
		_putchar(*(s + len));
		len--;
	}
	_putchar(10);
}

