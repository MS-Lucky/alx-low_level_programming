#include "main.h"
/**
 * main - Start of a program
 * Description: will print small alphabets
 * Return:0
 */
void print_alphabet(void)
{
	int i = 0;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

