#include "main.h"

/**
 * _isupper - checks if character is alphabetic uppercase
 * @c: character being passed
 *
 * Return: 1 if Uppercase. Else 0.
 */
int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}

