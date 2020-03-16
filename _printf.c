#include "holberton.h"

int _printf(const char *format, ...)
{
	int i = 0, leng = 0;
	va_list args;
	char *str;

	va_start(args, format);
	while (format == NULL)
	{	printf("\n");
		return (0);
	}
	while (format[i] != '\0')
	{
		if (format[i - 1] != '%' && format[i] != '%')
		{
			putchar(format[i]);
		}
		else
		{
			switch (format[i])
			{
				case 'c':
					leng = -1;
					putchar((char)va_arg(args, int));
					break;
				case 's':
					str = va_arg(args, char *);
					leng = strlen(str) - 2;
					_put(str);
					break;
				/*case 'i':
					putchar(va_arg(args, int));
					break;
				case 'd':
					putchar(va_arg(args, double));
					break;
				case 'f':
					putchar((float)va_arg(args, double));
					break;*/
			}
		}    
		i++;
	}
	va_end(args);
	return (i + leng);
}