#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @table_size: The size of the array.
 *
 * Return: If memory allocation fails - NULL.
 *         Otherwise - a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int table_size)
{
    hash_table_t *new_table;
    unsigned long int index;

    new_table = malloc(sizeof(hash_table_t));
    if (new_table == NULL)
        return (NULL);

    new_table->size = table_size;
    new_table->array = malloc(sizeof(hash_node_t *) * table_size);
    if (new_table->array == NULL)
        return (NULL);

    for (index = 0; index < table_size; index++)
        new_table->array[index] = NULL;

    return (new_table);
}

