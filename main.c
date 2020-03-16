#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	/*unsigned int ui;
	void *addr;*/

	len = _printf("Let's try to printf a simple sentence.\n", 'f');
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("%i, %d\n", 23, 32);
	/*ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);*/
	printf("Length:[%d, %d]\n", len2, len);
	len = _printf("%d\n", -762534);
	len2 = printf("%d\n", -762534);
	printf("Length:[%d, %d]\n", len2, len);
	/*_printf("Unsigned:[%u]\n", ui);
	printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');*/
	len = _printf("String:[%s], %s, %s\n", "I am a string !", "sammy", "J");
	len2 = printf("String:[%s], %s, %s\n", "I am a string !", "sammy", "J");
	printf("Length:[%d, %d]\n", len2, len);
	len = _printf(NULL);
	len2 = printf(" ");
	printf("Length:[%d, %d]\n", len2, len);
	/*_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");*/
	return (0);
}