#include "lists.h"
/**
 * add_dnodeint - add new node to list
 * @head: pointer to double list structure
 * @n: data to be added
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node = malloc(sizeof(dlistint_t));
if (node == NULL)
return (NULL);
node->n = n;
node->prev = NULL;
if (*head == NULL)
{
node->next = NULL;
*head = node;
}
else
{
node->next = *head;
(*head)->prev = node;
*head = node;
}
return (node);
}
