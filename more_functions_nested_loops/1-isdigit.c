#include "main.h"

/**
 * _isdigit - checks if character is ASCII digit 0-9
 * @c: digit being passed
 *
 * Return: 1 if digit is 0-9. Else 0.
 */
int _isdigit(int c)
{
	if (c < 58 && c > 47)
		return (1);
	else
		return (0);
}
