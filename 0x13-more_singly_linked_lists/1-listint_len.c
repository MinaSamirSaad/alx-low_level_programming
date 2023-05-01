#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked
 * @h: the list_t structure
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
size_t counter;
counter = 0;
while (h != NULL)
{
h = h->next;
counter++;
}
return (counter);
}
