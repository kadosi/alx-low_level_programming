#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	/* Print digits 0 to 9 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0'); /* Convert integer to character and print */
	}

	/* Print lowercase letters a to f */
	for (i = 0; i < 6; i++)
	{
		putchar(i + 'a'); /* Convert integer to character and print */
	}

	putchar('\n'); /* Print a newline character */

	return (0);
}

