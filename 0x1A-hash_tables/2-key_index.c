#include "hash_tables.h"
/**
 * key_index - function that gives you the index of a key
 * @key: the key of struct
 * @size: the size of the hash table
 * Return: the index of the key
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash = 0;
    if(key == NULL || size == 0)
    return (NULL);
    hash = hash_djb2(key) % size;
    return(hash);
}
