#include "lists.h"
/**
* get_nodeint_at_index - function that returns the nth node
* of a listint_t linked list.
*@head: head of the list
*@index: index of the node starting at 0
*Return: if the node does not exists NULL, else return the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int counter;
counter = 0;
if (head == NULL)
return (NULL);
while (counter != index)
{
if (head->next == NULL)
return (NULL);
head = head->next;
counter++;
}
return (head);
}
