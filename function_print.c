#include "holberton.h"

/**
* _put - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
void _put(char *c)
{
	while (*c != '\0')
	{
		putchar(*c);
		c++;
	}
}

/**
* bin - writes the character c to stdout
* @b: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int bin(int b)
{
	int i = 0, *p;
	while (b > 0)
	{
		p[i] = b % 2;
		b /= 2;
		i++;
	}
	i = 0;
	while (p[i])
	{
		putchar(*p);
		i++;
	}
	return (0);
}