#include "main.h"
/**
 * create_file - Function that creates a file
 *@filename: name of the file to create
*@text_content: text to write in the file
*Return: 1 in succes, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
int file = -1, length = 0;
ssize_t written = 0;
if (filename == NULL)
return (-1);
file = open(filename, O_RDWR | O_CREAT | O_APPEND, S_IRUSR | S_IWUSR);
if (file == -1)
return (-1);
if (text_content != NULL)
{
while (*text_content)
{
text_content++;
length++;
}
written = write(file, text_content, length);
}
if (written == -1 || written != length)
return (0);
close(file);
return (written);
}
