#include "lists.h"
/**
* sum_listint - Function that returns the sum of all the data (n)
* of a listint_t linked list
*@head: head of the list
*Return: the sum of the data or 0 if the list is empty
*/
int sum_listint(listint_t *head)
{
unsigned int sum;
sum = 0;
if (head == NULL)
return (0);
while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}
