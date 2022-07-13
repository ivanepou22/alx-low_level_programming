#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @s: input string.
* Return: the sring.
*/

char *cap_string(char *s)
{
	int count, c;

	count = 0;

	int letters[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + count) >= 97 && *(s + count) <= 122)
		*(s + count) = *(s + count) - 32;
	count++;

	while (*(s + count) != '\0')
	{
		for (c = 0; c < 13; c++)
		{
			if (*(s + count) == letters[c])
			{
				if ((*(s + (count + 1)) >= 97) && (*(s + (count + 1)) <= 122))
					*(s + (count + 1)) = *(s + (count + 1)) - 32;
				break;
			}
		}
		count++;
	}
	return (s);
}
