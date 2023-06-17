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
	char lowercase;
	char uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z' uppercase++)
	{
		putchar(uppercase);
	}
		putchar('\n');
	
		return (0);
}
