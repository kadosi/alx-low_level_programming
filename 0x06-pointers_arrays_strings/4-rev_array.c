#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int temp;
	int x = 0;

	for (; x < n / 2; x++)
	{
		temp = a[x];
		a[x] = a[n - 1 - y];
		a[n - 1 - y] = x;
	}
}

