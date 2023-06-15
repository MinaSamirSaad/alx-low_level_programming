#include "lists.h"
/**
 * delete_dnodeint_at_index -  delete node by index
 * @head: pointer to double list structure
 * @index: index of node
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *temp, *next_node, *prev_node;
int count = 0;

if (head == NULL || *head == NULL)
return (-1);

temp = *head;

while (temp != NULL && count < index)
{
temp = temp->next;
count++;
}

if (temp == NULL)
return (-1);

next_node = temp->next;
prev_node = temp->prev;

if (prev_node != NULL)
prev_node->next = next_node;
else
*head = next_node;

if (next_node != NULL)
next_node->prev = prev_node;

free(temp);
return (1);
}
