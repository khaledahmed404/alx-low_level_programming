#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a fun to calc the sum of all paramters
 * @n: num of paramter
 * @...: variable num
 *
 * Return: return sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sumof = 0;
	va_list lis;

	va_start(lis, n);

	for (i = 0; i < n; i++)
		sumof += va_arg(lis, int);

	va_end(lis);

	return (sumof);
}
