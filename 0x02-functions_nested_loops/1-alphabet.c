#include "main.h"

/**
 * main - prints _putchar followed by new line
 *
 * Description: prints _putchar
 *
 */

void print_alphabet(void)
{
char ch;
for (ch = "a" ; ch <= "z" ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
