#include "main.h"
/**
 * main - entry point
 * Return: always 0
 */
void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}
