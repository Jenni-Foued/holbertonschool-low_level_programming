#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - Print the opcodes of this program.
 * @s: Address of the main function.
 * @x: Number of bytes to print.
 **/
void print_opcodes(char *s, int x)
{
	int i = 0;

	for (; i < x; i++)
	{
		printf("%.2hhx", s[i]);
		if (i < x - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Print the opcodes of this main function.
 * @argc: Number of arguments.
 * @argv: Arguments vector.
 * Return: O (success).
 */
int main(int argc, char **argv)
{
	int x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(argv[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, x);
	return (0);
}
