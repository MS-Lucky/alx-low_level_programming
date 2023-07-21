#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - varidia function
 * @n : number of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	if(n == 0)
	{
		return (0);
	}
	va_list arg;
	unsigned i;

	int sum = 0;
	
	va_start(arg, n);
	for(i=0; i<n; i++)
		sum+=va_arg(arg,int);
	va_end(arg);
	return(sum);
}
