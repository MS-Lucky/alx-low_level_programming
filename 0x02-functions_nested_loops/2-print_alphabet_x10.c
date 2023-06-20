#include "main.h"

/**
 * print_alphabet_x10 -Start of a program
 * Description : Prints 10 times the alphabets
 * Return:0
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 10)
	{
		char j;

		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		i++;
		_putchar('\n');
	}
}

