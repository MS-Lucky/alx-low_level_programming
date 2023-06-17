#include <stdio.h>

/**
 *  main - start of a program
 *  Description : to list the alpabets in reverse ordder
 *  Return:0
 */
int main(void)
{
	char alpha;
	for(alpha = 'z'; alpha >= 'a'; alpha--)
	{
	putchar(alpha);
	}
	putchar('\n');
	return (0);
}

