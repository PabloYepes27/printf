#include "holberton.h"

/**
* _putchar - writes the character c to stdout
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

