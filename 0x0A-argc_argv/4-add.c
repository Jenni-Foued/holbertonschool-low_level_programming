#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the addition of argv's numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int sum = 0, i;

if (argc > 1)
{
	while (--argc)
	{
		for (i = 0; argv[argc][i] ; i++)
		{
			if (argv[argc][i] < '0' || argv[argc][i] > '9')
			{
				printf("ERROR\n");
				return (1);
			}
		}
		sum += atoi(argv[argc]);
	}

	printf("%d\n", sum);
	return (0);
}
printf("0\n");
return (0);
}
