#include "holberton.h"
/**
 *_strstr - find a string in a string.
 *@haystack: first string.
 *@needle: second string.
 *Return: char.
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int length_needle = 0, i = 0, j, tmpi, checker;

	while (needle[length_needle] != '\0')
		length_needle++;

	while (haystack[i] != '\0')
	{
		tmpi = i;
		checker = 0;
		for (j = 0; j < length_needle; j++)
		{
			if (haystack[tmpi] == needle[j])
			{
				tmpi++;
				checker++;
			}
		}
		if (checker == length_needle)
			return (haystack + i);
		i++;
	}

	return (0);

}
