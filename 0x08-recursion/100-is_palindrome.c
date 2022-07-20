#include "main.h"

/**
*_strlen_recursion - return string length
*@s: string point
*Return: recursion
*/

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);
	return (1 + _strlen_recursion(++s));
}

/**
*pal - palindrome
*@s: pointer to string
*@l: position
*Return: boolena
*/

int pal(char *s, int l)
{
	if (l < 1)
		return (1);
	if (*s == *(s + l))
		return (pal(s + 1, l - 2));
	return (0);
}

/**
* is_palindrome - palindrome
* @s: pointer to string
* Return: recursion
*/

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (pal(s, len - 1));
}
