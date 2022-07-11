#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
*generationRandomPassword - Randomly generate passwords.
*@N: password length.
*Decription: Function to randomly generates password.
*Return: nothing
*/

int main()
{
	generationRandomPassword(20);
	return (0);
}

void generationRandomPassword(int N)
{
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/|";

	int i;
	
	srand(time(NULL));

	for (i = 0; i < N; i++)
	{
		printf("%c", list[rand() % (sizeof(list) - 1)]);
	}
	printf("\n");
}
