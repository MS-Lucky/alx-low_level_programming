#include <stdio.h>
#include <ctype.h>
/**
 * main - starting point of  the program
 *
 * Discription : Print out lowwwer case and uppder case follws by newline
 * Return:0
 */
int main(void)
{
	char alphabet, uppercase;
	uppercase = toupper (alphabet);
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	}
	putchar(uppercase);
	{
	putchar('\n');
	}
	return (0);
}
