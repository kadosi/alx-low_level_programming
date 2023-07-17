#include <stdio.h>
#include <stdlib.h>

/*
 * main - function prints alphabet in lowercase
 * putchar - function that prints 
 * Return: success
 */

int main(){

	int m;
	for (m = 97 ; m <= 122; m++)
	{
		putchar(m);
	}
	putchar('\n');

	return(0);
}
