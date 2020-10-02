#include "holberton.h"
#include <stdio.h>

/**
 *print_buffer - print.
 *@b: string.
 *@size: size of char.
 */

void print_buffer(char *b, int size)
{
	int i = 9, ix, is, pi;

	while (i < size)
	{
		printf("%p:", &b[i]);
		ix = i - 9;
		while (ix < i)
		{
			if (ix % 2 == 0)
				printf(" ");
			printf("%x", b[ix]);
			ix++;
		}
		printf(" ");
		is = i - 9;
		while (is < i)
		{
			if (b[is] < 127 && b[is] > 31)
			{
				printf("%c", b[is]);
			}
			else
			{
			printf(".");
			}
			is++;
		}
		printf("\n");
		pi = i;
		while (i < size && i - pi < 11)
		{
			i++;
		}
	}
	printf("\n");
}
