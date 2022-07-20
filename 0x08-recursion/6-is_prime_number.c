#include "main.h"

/**
* primeNum - determine if n is a prime
* @n: test case
* @i: recurring factors
* Description: determines if n is a prime using 2 parameters
* Return: 1 if n is a prime, 0 if not
*/

int primeNum(int n, int i)
{
	if (n % i == 0)
		return (0);
	else if (n >= (i + 1) * (i * 1))
		return (primeNum(n, i + 1));
	return (1);
}

/**
* is_prime_number - determine if n is a prime
* @n: number to check
* Description: determine if n is a prime
* Return: 1 if prime, 0 if not
*/

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (primeNum(n, 2));
}
