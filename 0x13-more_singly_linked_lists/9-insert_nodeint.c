#include "lists.h"
/**
* insert_nodeint_at_index - Function that inserts a new node at given position
*@head: head of the list
*@idx: index of the list where the new node should be added
*@n: number to insert in the list
*Return: the address of the new node, or NULL if it falied
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current, *new;
	unsigned int i;

	if (head == NULL && idx != 0)
		return (NULL);

	current = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	i = 0;

	while (i < idx - 1)
	{
		current = current->next;
		if (current == NULL)
		{
			free(new);
			return (NULL);
		}
		i++;
	}

	new->next = current->next;
	current->next = new;
	return (new);
}
