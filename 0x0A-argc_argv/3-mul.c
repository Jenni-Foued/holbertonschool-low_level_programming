#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int mul, i;

	if (argc != 3)
	{
		printf("ERROR\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	for (i = 0; argv[1][i] ; i++)
		{
			if (isdigit(argv[1][i]) == 0)
			{
				printf("0\n");
				return (0);
			}
		}
		for (i = 0; argv[2][i] ; i++)
		{
			if (isdigit(argv[2][i]) == 0)
			{
				printf("0\n");
				return (0);
			}
		}
	printf ("%d\n", mul);
	return (0);
}
