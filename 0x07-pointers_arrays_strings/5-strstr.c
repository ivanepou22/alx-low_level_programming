#include "main.h"

/**
**_strstr - finds the first occurrence of the substring
*needle in the string haystack.
*@haystack: source string
*@needle: substring
*Description: finds first instance of needle in haystack
*Return: pointer to first instance, NULL if not in haystack
*/

char *_strstr(char *haystack, char *needle)
{
	int i;

	if (needle[0] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (needle[0] == haystack[i])
		{
			if (compare(&haystack[i], needle) == 1)
				return (&haystack[i]);
		}
	}
}

/**
*compare - compares two strings
*@haystack: source string
*@needle: string being compared
*Description: checks if needle is at start of haystack
*Return: 1 if matches, 0 if not
*/

int compare(char *haystack, char *needle)
{
	int i;

	for (i = 0; needle[i] != '\0'; i++)
	{
		if (haystack[i] == '\0')
			return (0);
		if (haystack[i] != needle[i])
			return (0);
	}
	return (1);
}
