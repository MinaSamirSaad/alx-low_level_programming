#include "main.h"
/**
* get_endianness - function that prints the binary representation of a number
*Return: endianness
*/
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char *) &x;
return ((int)*c);
}
