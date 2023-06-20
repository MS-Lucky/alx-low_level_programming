#include "main.h"

/**
 * _islower- the main program
 * @c: alphabet check
 * Description: islower
 * Return:0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
