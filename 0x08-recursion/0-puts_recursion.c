#include "main.h"

/**
* _puts_recursion - Print a string
*@s: char received
*Return: Nothing
*/
void _puts_recursion(char *s)
{
if(*s != '\0'){
putchar(*s);
s++;
_puts_recursion(s);
}
else
{
putchar('\n');
}

}
