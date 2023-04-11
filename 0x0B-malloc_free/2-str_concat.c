#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*str_length- returns the lenght of a string
*@s: poiter of character
*Return: the length of a string
*/
unsigned int str_length(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}

/**
* *str_concat - concatenates two strings
*@s1: first string to concatenate
*@s2: second string to concatenate
*Return: the ponter to string concatenate or NULL
*/
char *str_concat(char *s1, char *s2)
{
char *new_str;
unsigned int size, i, s1_length, s2_length, j;
if (s1 == NULL || s2 == NULL)
return (NULL);
s1_length = str_length(s1);
s2_length = str_length(s2);
size = s1_length + s2_length + 1;
new_str = malloc(sizeof(char) * size);
if (new_str == NULL)
return (NULL);
for (i = 0; i < s1_length; i++)
{
new_str[i] = s1[i];
}
for (j = 0; j < s2_length; j++)
{
new_str[i] = s2[j];
i++;
}
return (new_str);
}
