#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer.
 *
 * Return: natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - helper function for _sqrt_recursion.
 * @n: integer.
 * @i: integer.
 *
 * Return: natural square root of n.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));
}

