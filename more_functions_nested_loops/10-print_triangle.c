#include "main.h"

/**
 * print_triangle - check the code for school School students.
 * @size: size of the triangle being printed
 *
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int y, s, p;

	if (size > 0 && size != 1)
	{
		for (y = 1; y <= size; y++)
		{
			for (s = (size - y); s > 0; s--)
				_putchar(' ');
			for (p = 0; p < y; p++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
		_putchar('\n');
}
