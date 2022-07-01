#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main- entry point
*Description: Alphabets
*Return: zero on success
*/
int main(void)
{
	char num = '0';

	while (num < '10')
	{
		putchar(num);
		num++;
	}
	printf('\n');
	return (0);
}
