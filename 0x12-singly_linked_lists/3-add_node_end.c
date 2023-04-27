#include "lists.h"
/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to add
 * Return: the address of the new element or null if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *current = *head;
int len;
len = str_length(str);
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
free(newNode);
return (NULL);
}
if (*head == NULL)
{
*head = newNode;
return (*head);
}
while (current->next != NULL)
current = current->next;

current->next = newNode;
newNode->len = len;
newNode->str = copy_str(str);
newNode->next = NULL;
return (newNode);
}
