#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sums numbers passed as arguments
* @n: number of arguments to be summed up
* Return: always 0 (successful)
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum, value;
	va_list list;

	sum = 0;


	if (n == 0)
		return (0);
	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(list, int);
		sum += value;
	}

	va_end(list);
	return (sum);
}
