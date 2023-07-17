#include <stdio.h>

/**
 * main - initialization Entry
 * Description: exclude alphabets
 * Return: 0 succession
 */
int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
	if (al != 'e' && al != 'q')
		putchar(al);
	}
	putchar('\n');
	return (0);
}
