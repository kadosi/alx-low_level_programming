#include "main.h"
#include <ctype.h>


/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be modified.
 *
 * Return: The modified string.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (islower(s[i]))
		{
			if (s[i - 1] == ' ' || s[i - 1] == '\n'
		|| s[i - 1] == '\t' || s[i - 1] == ','
		|| s[i - 1] == ';' || s[i - 1] == '!'
		|| s[i - 1] == '?' || s[i - 1] == '"'
		|| s[i - 1] == '(' || s[i - 1] == ')'
		|| s[i - 1] == '{' || s[i - 1] == '}'
		|| s[i - 1] == '.')
			{
				s[i + 1] = toupper(s[i + 1]);
			}
		}
		i++;
	}
	return (s);
}
