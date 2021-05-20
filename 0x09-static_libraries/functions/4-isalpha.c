#include "holberton.h"

/**
 * _isalpha - define is a character is alphabetic.
 * @c: the character to be tested.
 * Return: - 1 if c is an alphabet 0 if not.
 */
int  _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
	return (1);
}
	else
{
return (0);
}
}
