#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: pointer to double list structure
 * @idx: index of node
 * @n: data to add
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int count = 0;
dlistint_t *temp = *h;
dlistint_t *node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
node->n = n;
while (temp && count <= idx)
{
if (count == idx)
{
node->prev = temp->prev;
node->next = temp;
temp->prev->next = node;
temp->prev = node;
return (node);
}
temp = temp->next;
count++;
}
return (NULL);
}
