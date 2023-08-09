#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all arguments of the program.
 * @ac: argument count.
 * @av: pointer to array of size ac.
 * Return: NULL if ac == 0 or av == NULL, Pointer to new string.
 * NULL on fail.
 */
char *argstostr(int ac, char **av)
{
	int i, j, size = 0, k = 0;
	char *arg;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			size++;

	arg = malloc(size + ac + 1);
	if (arg == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			arg[k++] = av[i][j];
		arg[k++] = '\n';
	}
	arg[k] = '\0';

	return (arg);
}
