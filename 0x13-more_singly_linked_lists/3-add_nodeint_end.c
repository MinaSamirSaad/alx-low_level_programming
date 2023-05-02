#include "lists.h"
/**
* add_nodeint_end - function that adds a new node at the end of a list_t list
*@head: head of the list
*@n: number value to add
*Return: the addres of the new element or null if it fails
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *current = *head;
listint_t *new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (*head);
}
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
return (new_node);
}
