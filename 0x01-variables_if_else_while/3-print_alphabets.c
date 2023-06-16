#include <stdio.h>
#include <ctype.h>
/**
 * maint - Entry of the program
 * Discription : Print out lowwwer case and uppder case follws by newline
 * Return:0
 */
int main(void)
{
	char alphabet, uppercase;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	putchar(alphabet);
	
	uppercase = toupper(alphabet);
	putchar(uppercase);
	}
	putchar('\n');
	
	return (0);
}
