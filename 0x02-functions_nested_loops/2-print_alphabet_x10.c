#include "main.h"
/**
 * print_alphabet_x10 - Make the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 97; y <= 122; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
	}
}

