#include "lists.h"
/**
*  str_length - returns the lenght of a string
*@m: poiter of character
*Return: the length of a string
*/
int str_length(const char *m)
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
**copy_str - copy a string with new memory
*@s: string received
*Return: Null otherwise the duplicated string
*/
char *copy_str(const char *s)
{
char *newStr;
unsigned int len;
unsigned int i;
i = 0;
len = str_length(s);
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
* add_node - Function that adds a new node at the beginning of a list
*@head: head of the list
*@str: string to add
*Return: the address of the new element or null if it fails
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;
if (head == NULL)
{
return (NULL);
}
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
{
free(newNode);
return (NULL);
}
if (*head == NULL)
newNode->next = NULL;
else
newNode->next = *head;
newNode->str = copy_str(str);
newNode->len = str_length(str);
*head = newNode;
return (*head);
}
