#include "main.h"
/**
* read_textfile - Function that reads a text file and prints it
*@filename: file name
*@letters: is the number of letters it should read and print
*Return: he actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fptr;
char ch;
ssize_t counter;
if(filename == NULL)
return (0);
fptr = fopen(filename, "r");
if (fptr == NULL)
return (0);
while (ch != EOF)
{
if (counter != letters)
{
ch = fgetc(fptr);
_putchar(ch);
}
counter++;
}
fclose(fptr);
if(counter < letters)
return (0);
return (counter);
}
