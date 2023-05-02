#include "lists.h"
/**
 * free_listint2 -function that frees a listint_t list.
 *@head: head of the list
*Return: Nothing
*/
void free_listint2(listint_t **head)
{
listint_t *temp, *current;

if (head == NULL || *head == NULL)
return;
current = *head;
while (head != NULL && current != NULL)
{
temp = current;
current = current->next;
free(temp);
}
*head = NULL;
}
