#include <stdio.h>

/**
 * main - Print all possible combination of 2 digits .
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i = 0;

while (i < 100)
{
putchar('0' + i / 10);
putchar('0' + i % 10);
putchar(' ');
putchar(',');
i++;
}
putchar('\n');
return (0);
}
