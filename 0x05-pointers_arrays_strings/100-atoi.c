#include "holberton.h"

/**
 * _atoi - convert a string into an integer.
 *@s: the string to use
 *Return: the converted integer.
 */

int _atoi(char *s)
{
int neg = 0, i = 0, res = 0;

while (!(s[i] <= '9' && s[i] >= '0' && s[i] != '\0'))
{
if (s[i] == '-')
{
neg++;
}
i++;
}

if (s[i] != '\0')
{
res = s[i] - 48;
i++;
}

while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
{
res = (res * 10) + (s[i] - 48);
i++;
}

if (neg % 2 == 1)
{
res = res * -1;
}
return (res);
}
