#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the character
 * Return: returns 1 if character is uppercase, 0 otherwise
*/
int _isupper(int c)
{
int i;
for (i = 'A'; i <= 'Z'; i++)
{
if (c == i)
return (1);
}
return (0);
}
