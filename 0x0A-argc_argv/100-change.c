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
	int cents, i = 0, coins = 0;
	int value[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < 5 && cents)
	{
		coins += cents / value[i];
		cents %= value[i];
		i++;
	}

	printf("%d\n", coins);
	return (0);
}
