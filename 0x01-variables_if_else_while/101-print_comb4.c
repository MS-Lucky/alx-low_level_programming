#include <stdio.h>
/**
 * main: start of the program
 * Discription : print out three combination numbers
 * Return:0
 */

int main() 
{
    // Write C code here
    int i;
    int j;
    int k;
    
    for (i = 0; i<= 9; i++)
    {
        for (j = i+1; j<= 9; j++)
    {
     for (k= j+1; k<= 9; k++)
     {
         putchar(i + '0');
         putchar(j + '0');
         putchar(k + '0');
         
         if (!(i ==7 && j==8 && k==9))
     {
    putchar (',');
    putchar (' ');
    }
     }
    }
    }
    return 0;
    }