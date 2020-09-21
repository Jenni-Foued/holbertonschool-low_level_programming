#include "holberton.h"

/**
 *_islower: define is a character is lower case or not
 *c: the character to be tested
 * Return: - 1 if lowercase 0 if not
 */
int  _islower(int c)
{
if (c >= 97 && c <= 122)
{
	return (1);
}
	else 
{
return (0);
}
}
