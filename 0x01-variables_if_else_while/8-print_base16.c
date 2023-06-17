#include <stdio.h>

/**
 * main - Start of the program
 * Description : the program will print numbers less then base 16r
 * Return:0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a' ; j <= 'f'; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
