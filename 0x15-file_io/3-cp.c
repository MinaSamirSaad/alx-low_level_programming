#include "main.h"
/**
* print_error_read - prints the error when read
*@file: name of the file
*Return: Nothing
*/

void print_error_read(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}

/**
* print_error_read - prints the error when read
*@file: name of the file
*Return: Nothing
*/

void print_error_read(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}

/**
* print_error_write - prints the error when write
*@file: name of the file
*Return: Nothing
*/

void print_error_write(char *file)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

/**
* main - Program that copies the content of a file to another file
*@argc: argument counter
*@argv: argument vector (names of the files)
*Return: the following errors:
* 97 for syntax error
* 98 for read error
* 99 for write error
* 100 for close error
*/
int main(int argc, char **argv)
{
int file_from = 0, file_to = 0, ret_value = 0;
int read_value = 0, close_value = 0;
char buff[1024];

if (argc != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
print_error_read(argv[1]);
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR
| S_IRGRP | S_IWGRP | S_IROTH);
if (file_to < 0)
{
close(file_from);
print_error_write(argv[2]);
}
read_value = read(file_from, buff, 1024);
if (read_value == -1)
print_error_read(argv[1]);
ret_value = write(file_to, buff, read_value);
if (ret_value != read_value)
print_error_write(argv[2]);
close_value = close(file_from);
if (close_value < 0)
print_error_close(argv[1]);
close_value = close(file_to);
if (close_value < 0)
print_error_close(argv[2]);
return (0);
}
