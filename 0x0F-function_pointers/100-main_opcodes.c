#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]);
/**
 * main - Entry point of the program
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 1 if the number of arguments is incorrect,
 * 2 if the number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	unsigned char *ptr = (unsigned char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", ptr[i]);
	}
	printf("\n");

	return (0);
}

