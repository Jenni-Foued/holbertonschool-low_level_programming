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
int x;
int y;
x = 49;
y = 50;

for (i = 48; i < 58; i++)
{
for (j = x; j < 58; j++)
{
for (k = y; k < 58; k++)
{
if ((i != j) && (i != k) && (j != k))
{
putchar(i);
putchar(j);
putchar(k);
if (!((i == 55) && (j == 56) && (k == 57)))
{
putchar(44);
putchar(32);
}
}
}
}
y = y + 1;
x = x + 1;
}
putchar('\n');
return (0);
}
