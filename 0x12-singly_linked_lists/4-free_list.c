#include "lists.h"
/**
 * free_list - function that freees a list
 *@head: head of the list
*Return: Nothing
*/
void free_list(list_t *head)
{
list_t *current;
if (head == NULL)
return;
while (head->next != NULL)
{
current = head->next;
free(head->str);
free(head);
head = current;
}
free(head->str);
free(head->next);
free(head);
}
