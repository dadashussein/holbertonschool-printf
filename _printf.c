#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _print_string - prints a string
 * @s: string to print
 *
 * Return: number of characters printed
 */
void _print_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
}
/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i;

	if (format == NULL)
		return (-1);
	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				_putchar(va_arg(args, int));
			}
			else if (format[i] == 's')
			{
				_print_string(va_arg(args, char *));
			}
			else if (format[i] == '%')
			{
				_putchar('%');
			}
			else if (format[i] == '\0')
			{
				return (-1);
			}
			else
			{
				_putchar('%');
				_putchar(format[i]);
			}
		}
		else
			_putchar(format[i]);
	}
	va_end(args);
	return (i);
}
