#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stddef.h>

/* Structure for a node in a hash table */
typedef struct hash_node_s
{
    char *key;                 /* The key, string (The key is unique in the HashTable) */
    char *value;               /* The value corresponding to a key */
    struct hash_node_s *next;  /* A pointer to the next node of the List */
} hash_node_t;

/* Structure for a hash table */
typedef struct hash_table_s
{
    unsigned long int size;    /* The size of the array */
    hash_node_t **array;       /* An array of size @size, each cell is a pointer to the first node of a linked list */
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

#endif /* HASH_TABLES_H */
