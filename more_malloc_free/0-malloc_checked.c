#include "main.h"

/**
 * malloc_checked - allocates memory checks for failure
 * @b: the size in bytes to allocate
 *
 * Return: exits with 98 on fail. ptr  memory on success
 */

void *malloc_checked(unsigned int b)
{
	void *ar;

	ar = malloc(b);
	if (ar == NULL)
		exit(98);
	return (ar);
}
