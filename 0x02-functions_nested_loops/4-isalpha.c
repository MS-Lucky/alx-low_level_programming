#include "main.h"

/**
 * _isalpha - entery point
 * Description: identify a character
 * @c: compile characters
 * Return:0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
