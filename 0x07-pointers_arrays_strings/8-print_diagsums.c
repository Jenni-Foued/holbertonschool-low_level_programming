#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - print the sum of the 2 diagonals of a matrix.
 *@size: size of a square matrix.
 *@a: the matrix.
 */

void print_diagsums(int *a, int size)
{
	int i, j = 0;
	long int sum = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i,i];
	}

	printf("%li", sum);
	sum = 0;

	for (i = size - 1; i >= 0; i--)
	{
		sum += a[j,i];
		j++;
	}

	printf("%li", sum);
}
