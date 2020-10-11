#include "holberton.h"
/**
 * print_int - print integer
 * @num: the given integer
 *
 * Return: void
 */
void print_int(int num)
{
	if (num < 0)
	{
		_putchar('-');
		num *= (-1);
	}
	if (num / 10)
		print_int(num / 10);
	_putchar(num % 10 + '0');
}
/**
 * _atoi - converts character to integer
 * @c: the given character
 *
 * Return: An integer
 */
int _atoi(char *c)
{
	unsigned int val = 0;
	int sign = 1;

	while (*c)
	{
		if (*c == '-')
			sign *= (-1);
		else
		{
			val = (val * 10) + (*c - '0');
		}
		c++;
	}
	return (sign * val);
}
/**
 * main - multiplies two numbers
 * @argc: Arguments count
 * @argv: Arguments vector
 *
 * Return: 0 if exit with success, 1 exit with error
 */
int main(int argc, char **argv)
{
	int mul;
	char *e;

	e = "Error";
	if ((argc - 1) == 2)
	{
		mul = _atoi(argv[1]) * _atoi(argv[2]);
		print_int(mul);
		_putchar('\n');
		return (0);
	}
	else
	{
		while (*e)
			_putchar(*e++);
		_putchar('\n');
		return (1);
	}
}
