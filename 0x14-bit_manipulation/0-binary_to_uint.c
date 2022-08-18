#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * power - returns 2 ^ y
 * @c: only calculate if c != 0
 * @y: exponent value
 * Return: 2 ^ y or 0 if fail
 */
int power(char c, int y)
{
	if (c == '0')
		return (0);
	else if (y == 0)
		return (1);
	else if (y == 1)
		return (2);
	return (2 * power(c, y - 1));
}
/**
 * binary - converts a string binary number into a unsigned int
 * @b: binary string
 * @num: pointer to number where value is stored
 * Return: decimal as unsigned int
 */
unsigned int binary(const char *b, unsigned int *num)
{
	int index;

	if (b[1] == '\0')
	{
		*num = b[0] - '0';
		return (1);
	}
	index = binary(b + 1, num);
	*num +=  power(b[0], index);
	return (index + 1);
}

/**
 * binary_to_uint - converts a string binary number into a unsigned int
 * @b: binary string
 * Return: decimal as unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i;

	num = 0;

	if (b == NULL || b[0] == '\0')
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
	}

	binary(b, &num);
	return (num);
}
