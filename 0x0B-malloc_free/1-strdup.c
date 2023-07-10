<<<<<<< HEAD
#include <stdlib.h>
#include <string.h>
/**
 * _strdup -main function
 * @str: char
 * Return:0
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
		return (NULL);
	new_str = malloc(strlen(str) + 1);

	if (new_str == NULL)
		return (NULL);
	strcpy(new_str, str);
	return (new_str);
=======
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = _strdup("ALX SE");
	if (s == NULL)
	{
		printf("failed to allocate memory\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
>>>>>>> 00e40592838597d7dd0a39c5ebccecc3a1c254e2
}
