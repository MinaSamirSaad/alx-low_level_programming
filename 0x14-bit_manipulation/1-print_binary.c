#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 *@n: nuber to convert
*Return: Nothing
*/
void print_binary(unsigned long int n)
{
int a[15], i = 0;
if (n == 0)
_putchar('0');
while (n != 0)
{
if (n % 2 == 0)
a[i] = 0;
else
a[i] = 1;
n /= 2;
i++;
}
i--;
while (i >= 0)
{
_putchar(a[i] + '0');
i--;
}
}
