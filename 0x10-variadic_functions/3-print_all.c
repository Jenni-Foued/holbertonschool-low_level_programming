#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_c - Print a char.
 * @c: Char to be printed.
 **/
void print_c(va_list c)
{
	printf("%c", va_arg(c, int));
}
/**
 * print_i - Print an int.
 * @i: integer to be printed.
 **/
void print_i(va_list i)
{
	printf("%d", va_arg(i, int));
}
/**
 * print_f - Print a float.
 * @f: Float to be printed.
 **/
void print_f(va_list f)
{
	printf("%f", va_arg(f, double));
}
/**
 * print_s - Print a string.
 * @s: String to be printed.
 **/
void print_s(va_list s)
{
	char *str = va_arg(s, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_all - Print any type of arguments.
 * @format: A list of types of arguments.
 **/

void print_all(const char * const format, ...)
{
	format_t s[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s},
		{'\0', '\0'}
	};
	unsigned int i = 0, j;
	char *separator = "";
	va_list args;

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (s[j].form != '\0')
		{
			if (s[j].form == format[i])
			{
				printf("%s", separator);
				s[j].f(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
}
