#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
long int pf, af, f, s;

s = 2;
pf = 1;
af = 2;
while ((af + pf) <= 4000000)
{
f = pf + af;
pf = af;
af = f;
if ((f % 2) == 0)
{
s = s + f;
}
}
printf ("%ld\n", s);
return (0);
}
