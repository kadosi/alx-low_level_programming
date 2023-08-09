#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
	size_t len_s1;
	size_t len_s2;
	char *result;


	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	result = (char *)malloc(len_s1 + len_s2 + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
