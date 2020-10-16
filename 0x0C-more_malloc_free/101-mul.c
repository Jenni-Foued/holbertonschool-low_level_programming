#include "holberton.h"
#include <stdlib.h>

/**
 * _atoi_digit - convert a char to integer.
 * @x: character to convert.
 * Return: integer.
 **/

int _atoi_digit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
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
 * create_array - allocate an array of integers.
 * @argv: string to convert into array of integers.
 * @argc: the  string's number.
 * @length: Number of elements of array.
 * Return: pointer to array.
 **/
void *create_array(char **argv, int argc, unsigned int length)
{
	char *tab;
	unsigned int i;

	tab = malloc(sizeof(int) * length);
	if (tab == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
	{
		tab[i] = (argv[argc][i]);
	}
	return (tab);
}

/**
 *_calloc - allocate array of size * nmemb.
 * @nmemb: number of elements.
 * @size: size of element.
 * Return: pointer to array.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *tab;
	unsigned int i;

	tab = malloc(size * nmemb);

	if (tab == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		tab[i] = '0';

	return (tab);
}

/**
 * mul_array - multiply two arrays.
 * @a1: first array.
 * @len1: length of array a1.
 * @a2: second array.
 * @len2: length of array a2.
 * @a3: array for result.
 * @lenres: length of array a3.
 * Return: pointer to array.
 **/

void *mul_array(char *a1, int len1, char *a2, int len2,
char *a3, int lenres)
{
	int k, mul = 0, c = 0;
	int i, j;

	for (i = len1 - 1; i >= 0; i--)
	{	k = lenres - 1 - c;
		for (j = len2 - 1; j >= 0; j--)
		{
			mul += (a1[i] - '0') * (a2[j] - '0');
			a3[k] = mul % 10 + '0';
			mul /= 10;
			k--;
		}
		mul += a3[k] - '0';
		if (mul > 9)
		{
			a3[k] = mul % 10 + '0';
			mul /= 10;
			a3[k - 1] = mul + '0';
		}
		else
		{
			a3[k] = mul + '0';
		}
		mul = 0;
		c++;
	}
	return (a3);
}

/**
 * print_array - print all digits of array.
 * @nb: number of elements to print.
 * @a: array of elements.
 **/
void print_array(char *a, int nb)
{
	int i = 0;

	while (a[i] == '0' && (i + 1) < nb)
	{
		i++;
	}
	for (; i < nb; i++)
	{
		_putchar(a[i]);
	}
	_putchar('\n');
}

/**
 *main - print the multiplication of 2 numbers.
 *@argc: array length.
 *@argv: array.
 *Return: 0.
 */

int main(int argc, char *argv[])
{
	int i, len1, len2, lenres;
	char E[6] = {'E', 'r', 'r', 'o', 'r', '\n'};
	char *tab1, *tab2, *tabres;

	/*test if we have less or more than 3 arguments and if arguments are numbers*/
	if (argc != 3 || _isNumber(argv[1]) == 1 || _isNumber(argv[2]) == 1)
	{
		for (i = 0; i < 6; i++)
		{
			_putchar(E[i]);
		}
		exit(98);
	}
	for (len1 = 0; argv[1][len1]; len1++)
	;
	tab1 = create_array(argv, 1, len1);
	for (len2 = 0; argv[2][len2]; len2++)
	;
	tab2 = create_array(argv, 2, len2);
	lenres = len1 + len2;
	tabres = _calloc(lenres, sizeof(int));
	tabres = mul_array(tab1, len1, tab2, len2, tabres, lenres);
	print_array(tabres, lenres);
	free(tab1);
	free(tab2);
	free(tabres);
	return (0);
}
