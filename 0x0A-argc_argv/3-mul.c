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
	int arg1 = 0, arg2 = 0;

	if (argc == 3)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		printf("%d\n", arg1 * arg2);
		return (0);
	}
	printf("Error\n");
	return (1);
}
