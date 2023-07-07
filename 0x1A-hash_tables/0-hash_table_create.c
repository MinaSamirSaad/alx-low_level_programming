#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: size of the hash table
 * Return: the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table = NULL;
hash_node_t **new_array = NULL;

if (size <= 0)
return (NULL);
table = (hash_table_t *)malloc(sizeof(hash_table_t));
if (table == NULL)
return NULL;
new_array = (hash_node_t **)malloc(size * sizeof(hash_node_t));
if (new_array == NULL)
{
free(new_array);
return (NULL);
}
table->array = new_array;
table->size = size;
return (table);
}
