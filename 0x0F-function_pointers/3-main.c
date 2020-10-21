#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Perform an operation on 2 numbers.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: 0 (success).
 **/

int main(int argc, char *argv[])
{
	int a, b;
	int (*fp)();

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		if (get_op_func(argv[2]) == NULL)
		{
			printf("Error\n");
			exit(99);
		}
		/*fp = get_op_func(argv[2])(a, b);
		printf("%d\n", fp(a, b));*/
	}
	return (0);
}
