#include <stdio.h>
#include <ctype.h>
/**
 * main -starting point of  the program
 *
 * Description: Print out lowwwer case and uppder case follws by newline
 * Return:0 always
 */
int main(void)
{
	char alphabet;
	char uppercase;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	uppercase = toupper(alphabet);

	putchar(alphabet);
	putchar(uppercase);
	}
	putchar('\n');
	return (0);
}
