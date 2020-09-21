#include<stdio.h>

/**
 *main - print comb4.
 *
 *Return: 0 (success)
 */

int main(void)
{
int i;
int j;
int k;

for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
for (k = 48; k < 58; k++)
{
if (i != j && i != k && j < k && i < j)
{
putchar(i);
putchar(j);
putchar(k);
if (i == 7)
{
break;
}
if (!(i == 55 && j == 56 && k == 57))
{
putchar(44);
putchar(32);
}
}
}
}
}
putchar('\n');
return (0);
}
