#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the number of arguments.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
}
