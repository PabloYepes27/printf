#include "holberton.h"

/**
* _bin - convert the input into binary
* @b: The input number
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int _bin(unsigned int b)
{
	int i = 0, j;
	char p[1000] = {'\0'};

	if (b == 0)
	{
		putchar('0');
		return (1);
	}
	while (b > 0)
	{
		p[i] = b % 2;
		b /= 2;
		i++;
	}
	j = i - 1;
	while (j >= 0)
	{
		putchar(p[j] + '0');
		j--;
	}
	return (i);
}
