#include "lists.h"
/**
* pop_listint - Function that deletes the head node od a linked list and
* returns the head node's data(n)
*@head: head of the list
*Return: head node's list, if list is empty 0
*/

int pop_listint(listint_t **head)
{
listint_t *current;
int pop_value;
current = *head;
if (*head == NULL)
return (0);
pop_value = current->n;
*head = current->next;
free(current);
return (pop_value);
}
