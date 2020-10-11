#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the addition of argv's numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char **argv)
{
	int sum = 0, i, j;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] ; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
		sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
