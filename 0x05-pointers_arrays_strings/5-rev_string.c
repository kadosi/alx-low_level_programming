#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: the string char s in reverse
 */
void rev_string(char *s)
{
	int length;
	char temp;
	int x, y;

	for (length = 0; s[length] != '\0'; length++)
	{
	}

	for (x = length - 1, y = 0; x > y; x--, y++)
	{
		temp = s[y];
		s[y] = s[x];
		s[x] = temp;
	}
}
