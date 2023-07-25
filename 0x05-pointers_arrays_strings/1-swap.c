#include "main.h"

/**
 * swap_int - function that swaps the values of a and b
 * @a: int to be swapped to b
 * @b: int to be swapped to a
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;
}
