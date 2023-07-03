#include <unistd.h>

/**
 * _memset - writes the character c to stdout
 * @n: The character to print
 * @src: char
 * @dest: char
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
