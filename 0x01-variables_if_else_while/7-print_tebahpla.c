#include<stdio.h>
/**
  *main - Entry point
  *Description: 'numbers from 0 to 9 but with th ASCII in reverse'
  *Return: always 0
  */
int main(void)
{
	int x = 122;

	while (x > 96)
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
