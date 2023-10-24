#include "main.h"

/**
 * swap_int - define two parameters
 * @a: is a pointer
 * @b: is a pointer
 * Return: int
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
