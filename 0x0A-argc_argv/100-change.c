#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints the minimum number of coins to make change for money.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int cents, i, coins = 0;
	int pieces[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("ERROR\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents; i++)
	{
		coins += cents / pieces[i];
		cents %= pieces[i];
	}

	printf("%d\n", coins);
	return (0);
}
