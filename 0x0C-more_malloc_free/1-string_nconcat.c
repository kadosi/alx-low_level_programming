#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);
	unsigned int concatlen;

	if (n >= len2)
	{
		concatlen = len1 + len2;
	}
	else
	{
		concatlen = len1 + n;
	}
char *concatenated = malloc((concatLen + 1) * sizeof(char));
	if (concatenated == NULL)
	{
		return (NULL);
	}
	if (s1 != NULL)
	{
		strcpy(concatenated, s1);
	}
	if (s2 != NULL)
	{
		strncat(concatenated, s2, n);
	}
	concatenated[concatLen] = '\0';

	return (concatenated);
}
