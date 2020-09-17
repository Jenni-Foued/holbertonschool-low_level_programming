#include <stdio.h>

/**
 * main -  Prints all the alphabets in lowercase then in upercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 97; i < 123; i++)
{
putchar(i);
}
for (i = 65; i < 91; i++)
{
putchar(i);
}
putchar ('\n');
return (0);
}
