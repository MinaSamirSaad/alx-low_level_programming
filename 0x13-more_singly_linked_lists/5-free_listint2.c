#include "lists.h"
/**
 * free_listint - function that freees a list
 *@head: head of the list
*Return: Nothing
*/
void free_listint2(listint_t **head)
{
listint_t *current;
current = *head;
free(current);
}