#include<stdio.h>
/**
  *main - Entry point
  *Description: 'numbers from 0 to 9 but with th ASCII'
  *Return: always 0
  */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
		{
			continue;
		}
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
