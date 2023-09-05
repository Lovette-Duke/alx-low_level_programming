#include "main.h"
#include <stdlib.h>

void fetch(char **, char *);
void create(char **, char *, int, int, int);

/**
 * strtow - splits a string into words
 * @str: the string to be split
 * Return: pointer to an array
 */

char **strtow(char *str)
{
	int i = 0;
	int j = 0;
	int len = 0;
	char **word;

	if (str == NULL || str[0] == '\0' || (str[0] == ' ' && str[1] == '\0'))
		return (NULL);
	while (str[i])
	{
		if (j == 0 && str[i] != ' ')
			j = 1;
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			j = 0;
			len++;
		}
		i++;
	}
	len += j == 1 ? 1 : 0;
	if (len == 0)
		return (NULL);

	word = (char **)malloc(sizeof(char *) * len + 1);
	if (word == NULL)
		return (NULL);

	fetch(word, str);
	word[len] = NULL;
	return (word);
}

/**
 * fetch - get words into an array
 * @s: the string array
 * @str: the string
 * Return: none
 */

void fetch(char **s, char *str)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	int n;

	while (str[i])
	{
		if (flag == 0 && str[i] != ' ')
		{
			n = i;
			flag = 1;
		}
		if (i > 0 && str[i] == ' ' && str[i - 1] != ' ')
		{
			create(s, str, n, i, j);
			j++;
			flag = 0;
		}
		i++;
	}
	if (flag == 1)
		create(s, str, n, i, j);
}


/**
 * create - inserts words into an array
 * @words: the array of strings
 * @str: the string
 * @start: the index at the begining of the word
 * @end: the last index of the word
 * @index: the index of the array of strings
 * Return: none
 */

void create(char **words, char *str, int start, int end, int index)
{
	int i = 0;
	int j;

	i = end - start;
	words[index] = (char *)malloc(sizeof(char) * i + 1);

	while (start < end)
	{
		words[index][j] = str[start];
		start++;
		j++;
	}
	words[index][j] = '\0';
}
