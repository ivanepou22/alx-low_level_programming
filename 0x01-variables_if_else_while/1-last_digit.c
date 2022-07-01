#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - Entry point
*Descirption: Last digits
*Return: zero on success
*/
int main(void)
{
	int n;

	int mod = (n % 10);

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, (n % 10));

	if  (mod > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (mod == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is lees than 6 and not 0\n");
	}
	return (0);
}
