#include "main.h"
#include <stdlib.h>

/**
 * create_array -start of a program
 * @size: int argument
 * @c: char argumnet
 * Return:0
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;
	return (arr);
}

