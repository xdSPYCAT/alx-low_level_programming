#include "main.h"
/**
 * print_alphabet_x10 - entry point
 */
void print_alphabet_10x(void)
{
 	int x = 'a';
	int y = 0;

	while(y < 11)
	{

		while(x < 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
