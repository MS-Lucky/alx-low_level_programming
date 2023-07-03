#include "main.h"
/**
 * print_rev -print string in reverse order
 * @s: input string
 *
 * Description: This function printsa any string on reverse order
 */
void print_rev(char *s)
{
	int len;
	int i;

<<<<<<< HEAD
	for (int i = len - 1; i >= 0; i--)
=======
	char *cp = s;

	len = 1;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	i = len - 2;
	for (i = len - 2; i >= 0; i--)
>>>>>>> c81b96137d0f666cb82171d1b7170cdfd3be72b4
	{
		_putchar(cp[i]);
	}
	_putchar('\n');
}
