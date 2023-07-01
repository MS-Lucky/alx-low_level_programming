#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str1[20] = "Hello, ";
	char str2[] = "World!";

	printf("Before concatenation: %s\n", str1);
	_strcat(str1, str2);
	printf("After concatenation: %s\n", str1);
	return (0);
}
