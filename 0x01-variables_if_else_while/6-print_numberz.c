#include<stdio.h>
/**
  *main - Entry point
  *Description: 'numbers from 0 to 9 but with th ASCII'
  *Return: always 0
  */
int main(void)
{
	int x = 48;

	while (x < 58)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
