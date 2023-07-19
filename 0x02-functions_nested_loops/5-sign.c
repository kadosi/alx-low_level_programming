#include "main.h"
/**
 * print_sign - prints signs
 * @n: number being tested
 *
 * Return: 1 if n is positive, -1 if n is negative, 0 if n is zero
 */
int print_sign(int n)
{
	int sign = (n > 0) - (n < 0);

	_putchar(sign & 1 ? '+' : (sign & -1 ? '-' : '0'));
	return (sign);
}

