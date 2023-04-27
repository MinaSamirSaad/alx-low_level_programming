#include "lists.h"
/**
*  _str_length - returns the lenght of a string
*@m: poiter of character
*Return: the length of a string
*/
int _str_length(const char *m)
{
int count;
count = 0;

while (*(m + count) != '\0')
{
count++;
}
return (count);
}
/**
**_copy_str - copy a string with new memory
*@s: string received
*Return: Null otherwise the duplicated string
*/
char *_copy_str(const char *s)
{
char *newStr;
unsigned int len;
unsigned int i;
i = 0;
len = _str_length(s);
newStr = malloc(len *sizeof(char));
if (newStr == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
newStr[i] = s[i];
}
return (newStr);
}

/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @head: head of the list
 * @str: string to add
 * Return: the address of the new element or null if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *current;
int length;

current = *head;
length = _str_length(str);
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
free(newNode);
return (NULL);
}
if (*head == NULL)
{
*head = newNode;
return (*head);
}
while (current->next != NULL)
current = current->next;

current->next = newNode;
newNode->len = length;
newNode->str = _copy_str(str);
newNode->next = NULL;
return (newNode);
}
