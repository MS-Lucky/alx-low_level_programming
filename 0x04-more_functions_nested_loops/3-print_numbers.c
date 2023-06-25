#include "main.h"
/**
 * Description: print numbers 0 - 9 in order
 * Return: void;
 */
void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
