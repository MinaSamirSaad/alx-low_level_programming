#include "main.h"
/**
 * read_textfile - Function that reads a text file and prints it
 *@filename: file name
*@letters: is the number of letters it should read and print
*Return: he actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
 int fptr = -1;
char *ch;
ssize_t read_count, print_count;
if (filename == NULL)
return (0);
fptr = open(filename, O_RDONLY);
if (fptr == -1)
return (0);
ch = malloc(letters);
if (ch == NULL)
return (0);
read_count = read(fptr, ch, letters);
print_count = write(STDOUT_FILENO, ch, read_count);
fclose(fptr);
if (print_count != read_count)
return (0);
return (print_count);
}
