#include "holberton.h"
#include <stdlib.h>

/**
 * print_number - print a number.
 * @nb: number to print.
 **/
void print_number(int nb)
{
	if (nb < 10)
	{
		_putchar(nb + '0');
	}
	else
	{
		print_number(nb / 10);
		_putchar(nb % 10 + '0');
	}
}

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */

int _atoi(char *s)
{
	int i = 0;
	unsigned int res = 0;

	while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	return (res);
}

/**
 * _isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0).
 **/
int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}
/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int mul, i;
	char E[6]={'E','r','r','o','r','\n'};

	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	mul = _atoi(argv[1]) * _atoi(argv[2]);
	print_number(mul);
	_putchar('\n');
	return (0);
}
