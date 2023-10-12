#include "vardiac_functions.h"
#include <stdarg.h>
/*
 * variadic_addition - adds variables
 * Return: always 0
 */
int sum_them_all (int count, ...)
{
	va_list args;
	int i, sum;

	va_start (args, count);

	sum = 0;

	for (i = 0; i < count; i++)
		sum +=va_arh (args, int);

	va_end (args);
	return sum;
}
