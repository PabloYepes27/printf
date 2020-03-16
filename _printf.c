#include "holberton.h"


/**
* _printf - function like printf.
* @format: format to print.
* Return: lenght.
*/
int _printf(const char *format, ...)
{
	int i = 0, leng = 0, count = 0;
	va_list args;
	char *str;

	va_start(args, format);
	if (!format)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i - 1] != '%' && format[i] != '%')
			putchar(format[i]);
		else if (format[i - 1] == '%' && format[i] == '%')
			putchar(format[i]);
		else
		{
			count++;
			switch (format[i])
			{
				case 'c':
					leng++;
					putchar((char)va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					if (str == NULL)
						return (-1);
					leng += _put(str);
					break;
				case 'i':
				case 'd':
					leng += print_number(va_arg(args, int));
					break;
				case '%':
					break;
				default:
					leng++;
					putchar(format[i]);
					break;
			}
		}
		i++;
	}
	va_end(args);
	return (i + leng - count);
}
