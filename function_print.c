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
* _other_print - writes the character c to stdout
* @c: The character to print
*
* Return: lenght characters.
* On error, -1 is returned, and errno is set appropriately.
*/
int _other_print(char c)
{
	int i = 0;

	if (c != '%')
	{
		putchar('%');
		i++;
	}
	putchar(c);
	i++;

	return (i);
}

/**
* print_number - print a integer number.
* @n: integer number.
* Return: upper pointer.
*/
int print_number(int n)
{
	int aux = 0, i = 0, l = 0, z = 0;

	if (n == INT_MIN)
	{
		n = n + 1;
		aux = 1;
	}

	if (n < 0)
	{
		n = -n;
		putchar('-');
		i++;
	}

	if (n / 10 != 0)
		l = (z + print_number(n / 10));

	if (aux == 1)
		putchar('8');
	else
		putchar(n % 10 + '0');
	i++;
	return (i + l);
}
