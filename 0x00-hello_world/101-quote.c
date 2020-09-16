#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int len;
char *msg = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
len = strlen(msg);
fwrite(msg, 1, len, stderr);
return (1);
}
