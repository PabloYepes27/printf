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
* print_number - print a integer number.
* @n: integer number.
* Return: upper pointer.
*/
void print_number(int n)
{
	int aux = 0;

	if (n == INT_MIN)
	{
		n = n + 1;
		aux = 1;
	}

	if (n < 0)
	{
		n = -n;
		putchar('-');
	}

	if (n / 10 != 0)
		print_number(n / 10);

	if (aux == 1)
		putchar('8');
	else
		putchar(n % 10 + '0');
}
