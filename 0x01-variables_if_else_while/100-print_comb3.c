#include <stdio.h>

/**
 * main - Entry point of the program
 * Description : the program will print all possible combaination of single digits
 * Return:0
 */
int main(void)
{
        int i, j;

        for (i=0; i <=9; i++)
        {
                for (j=0; j <=9; j++)
                {
                putchar (i + '0');
                putchar (j + '0');

                if (i < 9 || j < 9)
                {
                putchar(',');
                }
                }
        }

        putchar('\n');

        return (0);
}