#include "main.h"

/**
 * print_times_table - Prints the times table of the input,
 * starting with 0.
 * @n: The value of the times table to be printed.
 */

void print_times_table(int n)
{
int i, j;

if (n <= 15 && n >= 0)
{
for (i = 0 ; i <= n ; i++)
{
for (j = 0 ; j <= n ; j++)
{
int r = i * j;
if (r < 10)
_putchar(r + '0');
else if (r >= 10 && r < 100)
{
_putchar((r / 10) + '0');
_putchar((r % 10) + '0');
}
else if (r >= 100)
{
_putchar((r / 100) + '0');
_putchar(((r % 100) / 10) + '0');
_putchar((r % 10) + '0');
}
if ( j == n)
continue;
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(' ');
}
_putchar('\n');
}
}
}
