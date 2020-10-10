#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	long int mul;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", mul);

	return (0);
}
