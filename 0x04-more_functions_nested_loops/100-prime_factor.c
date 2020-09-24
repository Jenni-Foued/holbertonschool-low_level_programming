#include <stdio.h>

/**
 * main - print prime factor of the number "612852475143"
 *
 * Return: void.
 */

int main(void)
{
int i;
long int bf, n;

i = 2;
n = 612852475143;
bf = 0;

for (i = 3; i <= n; i += 2)
{
while (n % i == 0)
{
n = n / i;
bf = i;
}

}
printf("%ld\n", bf);
return (0);
}
