#include "lists.h"
/**
 * list_len - returns the number of elements in a linked
 * @h: the list_t structure
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
size_t size;
size = 0;
while (h != NULL)
{
h = h->next;
size++;
}
return (size);
}
