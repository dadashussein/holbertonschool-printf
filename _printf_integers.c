#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * _printf - Custom printf function
 * @format: A list of types of arguments passed to the function
 *
 * Return: integer
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i, len = 0;

	va_start(args, format);
	if (!format)
		exit(98);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd' || format[i + 1] == 'i')
				print_int(args, &len);
		    else if (format[i + 1] == '\0')
				continue;
			else
			{
				_putchar('%');
				_putchar(format[i + 1]);
				len += 2;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			len++;
		}
	}
	if (len == 0)
		return (-1);
	va_end(args);
	return (len);
}
