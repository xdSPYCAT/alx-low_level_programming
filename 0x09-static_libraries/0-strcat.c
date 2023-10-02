#include "main.h"
/**
 * _strcat - function
 * @dest:pointer to destination
 * @src: pointer to source
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int c = 0;
	int v = 0;

	while (dest[c])
	{
		c++;
	}

	while (src[v])
	{
		dest[c++] = src[v];
		v++;
	}
	return (dest);
}
