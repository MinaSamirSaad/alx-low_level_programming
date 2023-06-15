#include "lists.h"
/**
 * add_dnodeint_end - add new node to end of list
 * @head: pointer to double list structure
 * @n: data to be added
 * Return: new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *h = *head;
dlistint_t *node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->next = NULL;
if (*head == NULL)
{
node->prev = NULL;
*head = node;
}
else
{
while (h->next != NULL)
{
h = h->next;
}
node->prev = h;
h->next = node;
}
return (node);
}
