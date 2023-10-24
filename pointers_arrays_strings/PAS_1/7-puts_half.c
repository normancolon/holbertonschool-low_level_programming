#include "main.h"

/**
 * puts_half - puts half of a string
 * @str: string
 *
 * Return: void
 */

void puts_half(char *str)
{
	int x = 0;

	while (*(str + x) != '\0')
	{
		x++;
	}

	if ((x % 2) != 0)
		x = x + 1;

	x = x / 2;

	while (*(str + x) != '\0')
	{
		_putchar(*(str + x));
		x++;
	}
	_putchar(10);
}
