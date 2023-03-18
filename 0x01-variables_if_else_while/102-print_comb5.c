#include <stdio.h>

/**
 * main - Prints all possible different combinations of digits,
 *
 *
 * Return: Always 0.
 */
int main(void)
{
int number1, number2, number3, number4;

for (number1 = 0; number1 < 10; number1++)
{
for (number2 = 0; number2 < 9; number2++)
{
for (number3 = 0; number3 < 10; number3++)
{
for (number4 = 1; number4 < 10; number4++)
{
putchar((number1 % 10) + '0');
putchar((number2 % 10) + '0');
putchar(' ');
putchar((number3 % 10) + '0');
putchar((number4 % 10) + '0');
if (number1 == 9 && number2 == 8 && number3 == 9 && number4 == 9)
break;
putchar(',');
putchar(' ');
}
}
}
}

putchar('\n');

return (0);
}
