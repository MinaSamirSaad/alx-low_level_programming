#include "main.h"
/**
* rev_string - reverse a string
*@s: string to reverse
*Return: Nothing
*/
void rev_string(char *s)
{
int len, i;

len = 0;
while (*(s + len) != '\0')
len++;
len--;
for (i = 0; i < len; i++)
{
*(s + len) = *(s + i);
}
}