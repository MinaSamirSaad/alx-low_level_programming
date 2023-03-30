#include "main.h"
/**
* _strlen - returns the lenght of a string
*@s: pointer of character
*Return: the length of a string
*/
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
* _strncat - returns the concatenates two strings
*@dest: pointer of character
*@src: pointer of character
*@n: number of characters to concatenate
*Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
int i = 0,
lendest = _strlen(dest);
while (i < n)
{
dest[lendest += i] = src[i];
i++;
}
dest[lendest] = '\0';
return (dest);
}
