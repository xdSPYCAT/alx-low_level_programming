#include<stdio.h>
/**
  *main - Entry point
  *Description: 'lowercase alphabet except q and e'
  *Return: always 0
  */
int main(void)
{
	int x = 97;

	while (x < 123)
	{
		if (x == 101 || x == 113)
		{
			x++;
			continue;
		}
		putchar (x);
		x++;


	}
	putchar('\n');
	return (0);
}
