#include<stdio.h>

/**
 *main - print comb3.
 *
 *Return: 0 (success)
 */

int main(void)
{
int i;
int j;
int x;

x = 48;
for (i = 48; i < 58; i++)
{
for (j = x; j < 58; j++)
{
if (i != j)
{
putchar(i);
putchar(j);
if (!(i == 56 && j == 57))
{
putchar(44);
putchar(32);
}
}
}
x = x + 1;
}
putchar('\n');
return (0);
}
