#include "main.h"

/**
 * _isalpha - entery point
 * Description: identify a character
 * @c - compile
 * Return:0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		retrurn (1);
	}
	else
	{
		return (0);
	}
}
