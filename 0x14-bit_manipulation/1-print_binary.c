#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 *@n: number to convert
*Return: Nothing
*/
void print_binary(unsigned long int n)
{
if (n == 0)
{
_putchar('0');
return;
}
else if (n != 1)
print_binary(n / 2);

if (n % 2 == 0)
_putchar('0');
else
_putchar(1 + '0');
}
