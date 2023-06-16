#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Starting point of the program
 *
 * Return:0
 */

int main(void)
{
	int n;
	int lastDigit;

<<<<<<< HEAD
	srand(time(0);
=======
	srand(time(0)
>>>>>>> 0380865b7740ec81394c1d1e91dc5e4990c12dfe
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
	if (lastDigit > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	else if (lastDigit == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else if ((lastDigit != 0) || (lastDigit < 6))
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastDigit);
	}
	return (0);
}
