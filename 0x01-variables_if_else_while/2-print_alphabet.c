#include <stdio.h>
/**
  *main - Entry point
  *Description: 'print lowercase alphabet'
  *Return: always 0
  */
int main(void)
{
	int x = 97;

	while (x < 123)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
