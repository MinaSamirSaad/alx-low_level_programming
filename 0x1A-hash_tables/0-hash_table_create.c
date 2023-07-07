#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: size of the hash table
 * Return: the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
table->size = size;
table->array = (hash_node_t **)malloc(size * sizeof(hash_node_t));
return table;
}
