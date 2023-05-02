#include "lists.h"
/**
 * print_listint_safe - print linked list (has loop or not)
 * print the loop start if present
 * @head: head
 * Return: (size of linked list)
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t size = 0;
	const listint_t *slow = head, *fast = head, *loopStart = head;
	int loop = 0;

	while (fast && fast->next)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		size++;
		if (slow == fast)
		{
			loop = 1;
			break;
		}
	}

	while (slow)
	{
		if (loop)
		{
			if (slow == loopStart)
			{
				printf("-> [%p] %d\n", (void *)slow, slow->n);
				break;
			}
			loopStart = loopStart->next;
		}

		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		size++;
	}

	return (size);
}
