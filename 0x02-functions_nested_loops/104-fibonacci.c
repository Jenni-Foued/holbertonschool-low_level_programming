#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
unsigned long int pf, af, f;

pf = 1;
af = 2;
printf("1, ");
printf("2, ");
for (i = 0; i < 96; i++)
{
f = pf + af;
pf = af;
af = f;
if (i != 95)
{
printf("%lu, ", f);
}
else
{
printf("%lu\n", f);
}
}
return (0);
}
