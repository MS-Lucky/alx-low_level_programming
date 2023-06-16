#include <stdio.h>

/**
 * main - Entery of main program
 * Description : lists down small alpahbets letters
 * Return:0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
