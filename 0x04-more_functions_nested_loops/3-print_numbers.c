#include "main.h"
/**
 * print_numbers -print numbers 0 -9
 * Description: print numbers -9 in order
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i < '10'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
