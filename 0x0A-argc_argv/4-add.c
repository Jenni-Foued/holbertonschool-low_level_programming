#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - print the addition of argv's numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	if (argc < 2)
	{
	printf("0\n");
	return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] ; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("ERROR\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
