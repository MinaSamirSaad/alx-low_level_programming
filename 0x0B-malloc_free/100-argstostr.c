#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
* *argstostr - concatenatea the arguments of the program
*@ac: argument counter
*@av: argument vector
*Return: 0 (success)
*/
char *argstostr(int ac, char **av)
{
	int i, j, c;
	char *str, *beg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			c++;
		}
		c++;
	}

	c++;
	str = malloc(c * sizeof(char));

	beg = str;

	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;
	}
	return (beg);
}