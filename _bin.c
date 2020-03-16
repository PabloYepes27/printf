#include "holberton.h"

/**
* bin - writes the character c to stdout
* @b: The pointer to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _bin(int b)
{
	int i = 0, *p;
	while (b > 0)
	{
		p[i] = b % 2;
		b /= 2
		i++;
	}
	return (i);
}
