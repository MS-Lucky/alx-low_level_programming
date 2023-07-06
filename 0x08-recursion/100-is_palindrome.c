#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if s is a palindrome, otherwise 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		if (s[i] != s[j])
			return (0);
		i++;
		j--;
	}
	return (1);
}
