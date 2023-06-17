#include <stdio.h>

/**
 * main - Start of the program
 * Description : the program will print numbers less then base 16 in small letter
 * Return:0
 */
int main(void)
{
	int i;
	int j;
	
	for (i = 0; i <= 10; i++)
	{
		putchar(i + '0');
	}
	for (j = 'a' ; j <= 'f'; j++)
	{
		putchar(j + 'a');
	}
	putchar('\n');
	return (0);
}
