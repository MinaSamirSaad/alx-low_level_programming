#include "lists.h"
/**
 * find_listint_loop - find loop in linkedlist  if exists
 * @head: head
 * Return: address of loop start of NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (!head)
		return (NULL);
	slow = head;
	fast = head;
	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
			break;
	}
	if (slow == fast)
	{
		fast = head;
		while (slow->next != fast->next)
		{
			slow = slow->next;
			fast = fast->next;
		}
		return (slow == fast ? slow : slow->next);
	}
	return (NULL);
}
