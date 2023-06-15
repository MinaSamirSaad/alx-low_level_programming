#include "lists.h"
/**
 * sum_dlistint - get sum of n in a list
 * @head: pointer to double list structure
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
dlistint_t *temp;
int sum = 0;
temp = head;
while (temp)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}
