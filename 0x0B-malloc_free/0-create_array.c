#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *create_array - creates an array of chars
*and initializes it with a specific char.
*@size: size of the array
*@c: character to initialized
*Return: 0 if size is zero, otherwhise a ponter to the array or null if fails
*/

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *array;

if (size == 0)
{
return (NULL);
}
else
{
array = malloc(sizeof(char) * size );
for (i = 0; i < size; i++)
{
array[i] = c;
}
}
if (array == NULL)
{
return (NULL);
}
return (array);
}
