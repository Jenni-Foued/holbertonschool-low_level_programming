#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
int j;

for (i = 57; i > 47; i--)
{
for (j = 57; i > 47; j--)
{
putchar(i);
putchar(j);
putchar(',');
}
}
putchar('\n');
return (0);
}
