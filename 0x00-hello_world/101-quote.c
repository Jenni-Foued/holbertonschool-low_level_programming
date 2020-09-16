#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
int len;
len = sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n");
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", len);
return (1);
}
