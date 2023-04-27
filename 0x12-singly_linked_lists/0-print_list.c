#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t structure
 * Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t size;
size = 0;
while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
size++;
}
return (size);
}
