#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Create a hash table
 * @size: The size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if an error
 * occurred
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table;

    table = malloc(sizeof(*table));
    if (table == NULL)
    {
        return (NULL);
    }

    table->array = calloc(size, sizeof(*(table->array)));
    if (table->array == NULL)
    {
        free(table);
        return (NULL);
    }

    table->size = size;

    return (table);
}

