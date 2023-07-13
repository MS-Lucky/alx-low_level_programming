#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked -function header
 * @b: argumnet
 * Return:0
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}

