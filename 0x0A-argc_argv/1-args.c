#include<stdio.h>
#include"main.h"

/**
 *  * main - prints name
 *   * @argc: number of arg
 *    * @argv: array of arg
 *     * Return: always 0
 */
int main(int argc, char *argv[])
{

	(void)argv;/*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
