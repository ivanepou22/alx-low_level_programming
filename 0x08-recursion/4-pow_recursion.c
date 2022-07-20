#include "main.h"

/**
* _pow_recursion - find x^y
* @x: base number
* @y: power of the base
* Description: find x^y using factorial
* Return: x^y, -1 if y is negative
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
