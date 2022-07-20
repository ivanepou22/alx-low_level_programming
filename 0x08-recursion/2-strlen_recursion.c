#include "main.h"

/**
* _strlen_recursion - return string length
* @s: string
* Description: find string length using recursion
* Return: string length
*/

int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);

	if (s[1] == '\0')
	{
		return (1);
	}
	else
	{
		return (_strlen_recursion(&s[1]) + 1);
	}
}
