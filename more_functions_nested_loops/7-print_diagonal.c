#include "main.h"

/**
 * print_diagonal - prints \ alot
 * @n: number of dashes
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i, spaces;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (spaces = 0; spaces < i; spaces++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	_putchar('\n');
}

