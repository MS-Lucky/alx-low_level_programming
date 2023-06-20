#include "main.h"
/**
* main - Start of a program
* Description : The program prints out Putchar
* Return :0
*/
int main(void)
{
	char str[] = "putchar";
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
