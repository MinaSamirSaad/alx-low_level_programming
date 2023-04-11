#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *_strdup - duplicaate a strning with new memory
*@str: string received
*Return: Null otherwise the duplicated string
*/

char *_strdup(char *str)
{
char *new_str;
unsigned int l = 0;
unsigned int i;
if (str == NULL)
return (NULL);
while (str[l] != '\0')
{
l++;
}
new_str = malloc(l * sizeof(char));
if (new_str == NULL)
return (NULL);
for (i = 0; i < l; i++)
{
new_str[i] = str[i];
}
return (new_str);
}
