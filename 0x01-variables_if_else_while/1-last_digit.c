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
        
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastDigit = n % 10;
				
	if (lastDigit > 5)
	{
	printf("Last digit of %d is %d and greater than 5 \n", n, lastDigit);
	}		
	
	else if(lastDigit == 0)
	{
	printf("Last digit of %d is %d and is 0 \n", n, lastDigit);
	}
	
	else if ((0 != lastDigit) || (lastDigit < 6))
	{
	printf("Last digit of %d is %d and is less than 6 and not 0 \n", n, lastDigit);
	}
	return (0);
}