#include "main.h"

/**
 * print_most_numbers - prints most numbers
 * @2 - not to be printed
 * @4 - not to be printed
 * new line.
 * use _putchar twice in your code
 */
void print_most_numbers(void)
{
	int s;

	for (s = 48; s <= 57; s++)
	{
		if (s != 50 && s != 52)
		{
			_putchar(s);
		}
	}
	_putchar('\n');
}
