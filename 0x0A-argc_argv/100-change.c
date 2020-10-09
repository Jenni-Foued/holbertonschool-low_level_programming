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
	int cents;
	int coins = 0;

	if (argc == 2)
	{
		cents = atoi(argv[1]);
		while (cents > 0)
		{
			if (cents >= 25)
			{
				coins += cents / 25;
				cents %= 25;
			}
			else if (cents >= 10)
			{
				coins += cents / 10;
				cents %= 10;
			}
			else if (cents >= 5)
			{
				coins += cents / 5;
				cents %= 5;
			}
			else if (cents >= 2)
			{
				coins += cents / 2;
				cents %= 2;
			}
			else
			{
				coins++;
				cents = 0;
			}
		}
		printf("%d\n", coins);
		return (0);
	}
	printf("ERROR\n");
	return (1);
}
