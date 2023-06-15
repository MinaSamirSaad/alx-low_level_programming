#include "lists.h"
/**
 * dlistint_len - get length of double linked list
 * @h: pointer to double list structure
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
int num = 0;
while (h)
{
h = h->next;
num++;
}
return (num);
}
