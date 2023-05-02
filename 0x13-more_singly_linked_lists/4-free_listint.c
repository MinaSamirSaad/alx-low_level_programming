#include "lists.h"
/**
 * free_listint - function that freees a list
 *@head: head of the list
*Return: Nothing
*/
void free_listint(listint_t *head)
{
listint_t *current;
if (head == NULL)
return;
while (head->next != NULL)
{
current = head->next;
free(head);
head = current;
}
free(head->next);
free(head);
}
