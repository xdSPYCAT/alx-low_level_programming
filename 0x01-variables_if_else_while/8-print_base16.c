#include<stdio.h>
/**
  *main - Entry point
  *Description: 'numbers from 0 to 9 but with th ASCII'
  *Return: always 0
  */
int main(void)
{
	int x = 48;
	int y = 97;

	while (x < 58)
	{
		putchar(x);
		x++;
	}

	while (y < 103)
	{
		putchar(y);
		y++;
	}
	putchar('\n');
	return (0);
}
