#include <stdio.h>

/**
 * main - Entry
 * Description: alphabet in reverse
 * Return: 0 succession
 */
int main(void)
{
	int rev;

	for (rev = 122; rev >= 97; rev--)
	{
		putchar(rev);
	}
	putchar('\n');
	return (0);
}
