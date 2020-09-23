#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
long int pf, af, f, f1, f2, f3;

pf = 1;
af = 2;
printf("1, ");
printf("2, ");
for (i = 0; i < 96; i++)
{
f = pf + af;
pf = af;
af = f;
if (f < 10000000)
{
printf("%ld", f);
}
else if ((f > 10000000) && (f < 100000000000000))
{
f2 = f / 10000000;
f3 = f % 10000000;
printf("%ld", f2);
printf("%ld", f3);
}
else
{
f1 = f / 100000000000000;
f2 = (f % 100000000000000) / 10000000;
f3 = f % 10000000;
printf("%ld", f1);
printf("%ld, ", f2);
printf("%ld, ", f3);
}
if (i != 95)
{
printf(", ");
}
}
printf("\n");
return (0);
}
