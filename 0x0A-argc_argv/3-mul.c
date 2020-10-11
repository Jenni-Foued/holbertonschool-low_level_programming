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
	int x = 0, y = 0;

	if (argc == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
