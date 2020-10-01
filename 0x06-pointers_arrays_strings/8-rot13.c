#include "holberton.h"

/**
 *rot13 - encoding a string using rot13.
 *@s: the string to be encoded to rot13.
 *Return: the string s encoded to rot13.
 */

char *rot13(char *s)
{
	int i = 0, j;
	char array_rot13[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T',
	 'U', 'V'
	, 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
	 'I',
	 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
	 'v', 'w',
	 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
	 'i', 'j', 'k', 'l', 'm'};
	char array_alpha[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
	 'I', 'J', 'K', 'L',
	 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W',
	 'X', 'Y', 'Z', 'a', 'b',
	 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
	 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
	 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

	while (s[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == array_alpha[j])
				s[i] = array_rot13[j];
		}
		i++;
	}

	return (s);
}
