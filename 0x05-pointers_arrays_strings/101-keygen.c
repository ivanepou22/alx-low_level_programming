#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
*generationRandomPassword - Randomly generate passwords.
*@N: password length.
*Decription: Function to randomly generates password.
*Return: nothing
*/

void generationRandomPassword(int N)
{
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\|";

	srand(time(NULL));

	for (int i = 0; i < password_length; i++)
	{
		printf("%c", list[rand() % (sizeof(list) - 1)]);
	}
	printf("\n");
}
