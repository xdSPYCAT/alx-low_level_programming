#include<stdio.h>
/**
  *main - Entry point
  *Description: 'number from 0 to 9'
  *Return: always 0
  */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}

