#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked -function to allocate memory
 * @b: allocated size
 * Return:allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}

