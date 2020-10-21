#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - Add two numbers.
 * @a: First number.
 * @b: Second number.
 * Return: integer.
 **/
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Substitute a number from another one.
 * @a: First number.
 * @b: Second number.
 * Return: integer.
 **/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiply a number by another one.
 * @a: First number.
 * @b: Second number.
 * Return: integer.
 **/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divide a number by another one.
 * @a: First number.
 * @b: Second number.
 * Return: integer.
 **/
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Get the rest of division of a number by another one.
 * @a: First number.
 * @b: Second number.
 * Return: integer.
 **/
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
