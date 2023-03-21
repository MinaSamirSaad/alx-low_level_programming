#include "main.h"

/**
 * print_alphabet - prints alphabet by _putchar followed by new line
 *
 * Description: prints alphabet by _putchar
 *
 */

void print_alphabet(void)
{
int ch;
for (ch = "a" ; ch <= "z" ; ch++)
_putchar(ch);

_putchar('\n');
}
