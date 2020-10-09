#include <stdio.h>
#include <stdlib.h>

/**
 *main - print argv's arguments.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	(void)argc;
	while (*(argv))
	{
		printf("%s\n", *(argv));
		argv++;
	}

	exit(EXIT_SUCCESS);
}
