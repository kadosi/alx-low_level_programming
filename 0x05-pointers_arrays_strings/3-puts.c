#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string
 * new line
 */

void _puts(char *str)
{
	int x = 0;

	for (x = 0; str[x]; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
