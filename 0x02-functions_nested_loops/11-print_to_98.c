#include <stdio.h>
#include "holberton.h"

/**
	* print_to_98 - print from n to 98 .
	* @n: the number to count from .
	* Return: void.
	*/
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
	if (n < 98)
	{
		n++;
	}
	else
	{
		n--;
	}
	}
	printf("98");
	printf("\n");
}
