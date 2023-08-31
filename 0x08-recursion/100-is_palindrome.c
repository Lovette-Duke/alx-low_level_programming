#include "main.h"

int _palindrome(char *s, int i, int n);
int _len(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (_palindrome(s, 0, _len(s)));
}

/**
 * _palindrome - checks of a palindrome
 * @s: the string to be checked
 * @i: an iterator
 * @n: the number of characters in a string
 * Return: 1 or 0
 */

int _palindrome(char *s, int i, int n)
{
	if (*(s + i) != *(s + n - 1))
		return (0);
	if (i >= n)
		return (1);
	return (_palindrome(s, i + 1, n - 1));
}

/**
 * _len - finds the lenght of a string
 * @s: string whose lenght is to be found
 * Return: lenght of a string
 */

int _len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _len(s + 1));
}
