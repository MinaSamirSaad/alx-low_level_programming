#include "lists.h"
/**
 * get_dnodeint_at_index - get node by index
 * @head: pointer to double list structure
 * @index: the index
 * Return: the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp;
unsigned int n = 0;
temp = head;
while (temp && n <= index)
{
if (n == index)
return (temp);
temp = temp->next;
n++;
}
return (NULL);
}
