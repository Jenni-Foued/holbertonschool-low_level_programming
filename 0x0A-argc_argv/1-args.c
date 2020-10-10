#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the number of arguments.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
