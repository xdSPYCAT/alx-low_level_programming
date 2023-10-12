#include "variadic_functions.h"
#include <stdarg.h>
/*
 * sum_them_all - adds variables
 * @count: number of
 * @...: variable
 * Return: if count == 0 - 0
 * otherwise - the sum of all parameters
 */
int sum_them_all(const unsigned int count, ...)
{
	va_list args;
	unsigned int i, sum;

	sum = 0;

	va_start(args, count);

	for (i = 0; i < count; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
