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
for (i = 9; i < 10; i--)
{
for (j = 9; i < 10; j--)
{
putchar(i);
putchar(j);
putchar(',');
}
}
putchar('\n');
return (0);
}
