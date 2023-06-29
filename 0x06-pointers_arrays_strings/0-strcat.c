#include "main.h"
#include <stdio.h>
/**
 * _strcat -concat two strings
 * @dest: destination string
 * @src: source string
 *
 * Description: concatenate string src to end of string destination
 *
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest != '\n')
	{
		dest++;
	}
	*dest = '\0'
	return (temp);
}
