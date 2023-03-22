#include <stdio.h>
/**
 * main - prints the sum
 *
 * Description: prints the sum of all the multiples of 3 or 5
 *
 * Return: 0
 */
int main(void)
{
int result, n;
for (n = 0; n < 1024 ; n++)
{
if (n % 3 == 0 || n % 5 == 0)
result += n;
}
printf("%d\n", result);
return (0);
}
