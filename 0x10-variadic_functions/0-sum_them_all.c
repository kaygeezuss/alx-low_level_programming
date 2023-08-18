#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Func returns sum of all param
 * @n: Number of param passed to the function
 * @...: A variable number of param to calculate sum of
 *
 * Return: If n == 0 - 0
 *         Or - Sum of all param
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int v, sum = 0;

	va_start(ap, n);

	for (v = 0; v < n; v++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
