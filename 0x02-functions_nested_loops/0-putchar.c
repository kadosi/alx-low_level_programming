#include <stdio.h>
#include "main.h"
/**
 * main - Entries
 * should be followed by newline '\n'
 * The program should return 0
 * Return: 0 succession
 *
 */
int main(void)
{
	char x[] = "_putchar";
	int y;

	for (y = 0; x[y] != '\0'; y++)
	{
		_putchar(x[y]);
	}
	_putchar('\n');

	return (0);
}
