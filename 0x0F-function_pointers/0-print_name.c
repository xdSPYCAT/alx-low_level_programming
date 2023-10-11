#include "function_pointers.h"
/**
 * print_name - prints name
 * @name: string name
 * @f: the printing function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)

		return;

	f(name);
}
