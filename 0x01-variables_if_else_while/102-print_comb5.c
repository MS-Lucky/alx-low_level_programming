#include <stdio.h>

/**
 * main - Start of a program
 * Description : oout put description
 * Return:0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			if (i < 10 && j < 10)
			{
				putchar ((i < 10 ? '0' : i / 10 + '0'));
				putchar ((i < 10 ? i + '0' : i % 10 + '0'));
				putchar (' ');
				putchar ((j < 10 ? '0' : j / 10 + '0'));
				putchar ((j < 10 ? j + '0' : j % 10 + '0'));
				putchar (',');
				}
				}
				}
				return (0);
				}
