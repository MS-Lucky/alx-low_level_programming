#include "main.h"
#include <stdio.h>
/**
 * print_array -print arrya
 * @a: array
 * @n: num
 *
 * Description:  print array
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			if (i != n - 1)
			{
				printf("%d, ", a[i]);
			}
			else
			{
				printf("%d", a[i]);
			}
		}
	}
	printf("\n");
}

