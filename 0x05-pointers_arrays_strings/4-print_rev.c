#include "main.h"
/**
 * print_rev -print string in reverse order
 * @s: input string
 *
 * Description: This function printsa any string on reverse order
 */
void print_rev(char *s)
{
	int len = strlen(str);

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}
