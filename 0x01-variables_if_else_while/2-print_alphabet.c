#include <stdio.h>

/**
 * main - initialization of character
 * Description: putchar to print alphabet
 * Return:0 succession
 */
int main(void)
{
	int A;

	for (A = 97; A <= 122; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
