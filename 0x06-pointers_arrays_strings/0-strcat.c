#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}
	for (; src[j] != '\0'; j++, i++)

	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}
