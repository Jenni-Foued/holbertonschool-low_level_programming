#include "holberton.h"

/**
 *_strlen - length of s.
 *@s: string.
 *@i: counter.
 *Return: int.
 */

int _strlen(char *s, int i)
{
	if (s[i])
	{
		i++;
		return (_strlen(s, i));
	}
	return (i);
}

/**
 *isPal - check if a string is palindrome.
 *@s: string.
 *@st: number of the first char of s.
 *@e: number of the last char of s.
 *Return: int.
 */

int isPal(char *s, int st, int e)
{
	if (st == e)
		return (1);

	if (s[st] != s[e])
		return (0);

	if (st < e + 1)
		return (isPal(s, st + 1, e - 1));

	return (1);
}

/**
 *is_palindrome - verify if a string is palindrome.
 *@s: string.
 *Return: 1 if true & 0 if false.
 */

int is_palindrome(char *s)
{
	int n = _strlen(s, 0);

	if (n == 0)
		return (1);
	return (isPal(s, 0, n - 1));
}
