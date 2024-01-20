#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <stddef.h>  /* For size_t definition */

/* Function prototypes */

/**
 * linear_search - Prototype for linear search function
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: First index where value is located, or -1
 */
int linear_search(int *array, size_t size, int value);

/**
 * binary_search - Prototype for binary search function
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 * Return: Index where value is located, or -1
 */
int binary_search(int *array, size_t size, int value);

#endif /* SEARCH_ALGOS_H */

