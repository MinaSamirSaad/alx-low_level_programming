#include "lists.h"
/**
 * free_dlistint - free all nodes in linked list
 * @head: pointer to double list structure
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head)
{
temp = head;
head = head->next;
free(temp);
}
}
