#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array of the hash table.
 *
 * Return: A pointer to the newly created hash table, or NULL if an error occurs.
 */
 
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;
	/* Allocate memory for hash table structure */
	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	/* Initialize the elements of the hash table */
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		free(hash_table);
		return (NULL);
	}
	/* Initialize each cell of the array to NULL */
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
