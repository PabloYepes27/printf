#include "holberton.h"

/**
* _put - writes the character c to stdout
* @c: The pointer to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _put(char *c)
{
	int i = 0;
	while (*c != '\0')
	{
		putchar(*c);
		c++;
		i++;
	}
	return (i);
}

/**
* _put_int - writes the character c to stdout
* @c: The pointer to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _put_int(int *c)
{
	int i = 0;
	while (*c != '\0')
	{
		putchar(*c);
		c++;
		i++;
	}
	return (i);
}