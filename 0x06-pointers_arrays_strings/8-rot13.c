#include "holberton.h"

/**
 *rot13 - encoding a string using rot13.
 *@s: the string to be encoded to rot13.
 *Return: the string s encoded to rot13.
 */

char *rot13(char *s)
{
	int i = 0, j = 0;
	char *string_rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm ";
	char *string_alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz\0";

	while (s[i] != '\0')
	{
		do {
			if (s[i] == string_alpha[j])
				s[i] = string_rot13[j];
			j++;
		} while (s[i] != string_alpha[j - 1] && string_alpha[j - 1] != '\0');
		j = 0;
		i++;
	}

	return (s);
}
