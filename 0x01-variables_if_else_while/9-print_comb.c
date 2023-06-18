#include <stdio.h>

/**
ii * main - Entry point of the program
 * Description : the program will print all possible combaination of single digits
 * Return:0
 */
int main(void)
{
	int i;

	for (i= 0; i <= 8; i++)
	{
	putchar (i + '0');
	putchar(',');
	}
	putchar('9');
	putchar('\n');

	return (0);
}


