#include<stdio.h>
#include"main.h"
/**
 * main - prints name
 * @argc: number of arg
 * @argv: array of arg
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
