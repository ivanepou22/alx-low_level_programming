#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * findword - find position of next word
 * @s: string
 * Return: position of next word
 **/
int findword(char *s)
{
	int i;

	for (i = 0; s[i] == ' '; i++)
		;

	return (i);
}
/**
 * wordlen - find length of word
 * @s: string
 * Return: length of word
 **/
int wordlen(char *s)
{

	int i;

	for (i = 0; s[i] != '\0' && s[i] != ' '; i++)
		;
	return (i);
}
/**
 * word_count - find number of words in string
 * @s: string
 * @word: switch used to track if currently in word
 * Return: number of words in string
 **/
int word_count(char *s, int word)
{

	if (s == NULL || s[0] == '\0')
		return (0);

	if (s[0] == ' ')
		return (word_count(++s, 0));

	else if (s[0] != ' ' && s[0] != '\0' && word == 1)
	{
		return (word_count(++s, 1));
	}
	else if (s[0] != ' ' && s[0] != '\0' && word == 0)
	{
		return (word_count(++s, 1) + 1);
	}

	return (0);
}
/**
 * strtow - create an array of words from string
 * @str: string
 * Description: create array of words from string, last element should be null
 * Return: pointer to strings, NULL if fails
 **/
char **strtow(char *str)
{
	char **list;
	int num_words, i, k, j;

	j = 0;
	num_words = word_count(str, 0);

	if (str == NULL || num_words == 0)
		return (NULL);
	list = malloc((num_words + 1) * sizeof(char *));
	if (list == NULL)
		return (NULL);

	for (i = 0; i < num_words; i++)
	{
		j += findword(&str[j]);
		list[i] = (char *)malloc((wordlen(str) + 1) * sizeof(char));
		if (list[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(list[i]);
			free(list);
			return (NULL);
		}
		for (k = 0; str[j] != ' ' && str[j] != '\0'; k++)
		{
			list[i][k] = str[j];
			j++;
		}
		list[i][k] = '\0';
	}
	list[i] = NULL;
	return (list);
}
