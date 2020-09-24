#include "holberton.h"

/**
 * print_triangle - print a triangle using " " and "#"
 *@size: height of the triangle
 *
 */

void print_triangle(int size)
{
	int i, j, n;

		if (size > 0)
		{
			for (n = 1; n <= size; n++)
			{
				for (i = size - n; i > 0; i--)
				{
					_putchar(' ');
				}
				for (j = 1; j <= n; j++)
				{
					_putchar('#');
				}
				_putchar('\n');
			}
		}
		else
		{
			_putchar('\n');
		}
}
