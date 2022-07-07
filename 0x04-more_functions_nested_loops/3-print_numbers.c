#include "main.h"

/**
*print_numbers - print 0-9
*Return: nothing
*/

void print_numbers(void)
{
	char num;

	for  (num >= '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
