#ifndef VARDIAC_H
#define VARDIAC_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * struct format - Types.
 * @form: Type symboles.
 * @f: Function pointer to the corresponding type function.
 **/
typedef struct format
{
char form;
void (*f)(va_list);
} format_t;
void print_all(const char * const format, ...);

#endif
