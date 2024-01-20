#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - Helper function to print an array
 * @array: a pointer to the first element of the array to print
 * @left: starting index of the array to print
 * @right: ending index of the array to print
 */
void print_array(const int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: the index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (int)mid;
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

