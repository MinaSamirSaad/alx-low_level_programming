#include "main.h"
/**
* binary_to_uint - function that converts a binary to an unsigned int
*@b: string of the binary number
*Return: the value of the conversion
*/
unsigned int binary_to_uint(const char *b)
{
int length = 0, num = 1;
unsigned int unit = 0;
if (b == NULL)
return (0);

while (b[length + 1] != '\0')
length++;
while (length >= 0)
{
if (b[length] != '1' && b[length] != '0')
return (0);
if (b[length] == '1')
{
unit += num;
}
num *= 2;
length--;
}
return (unit);
}
