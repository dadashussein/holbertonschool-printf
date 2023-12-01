#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"
/**
 * process_format - Processes a format string
 * @format: The format string
 * @args: The name for va_list
 * Return: The amount of characters printed
 */
int process_format(char format, va_list args)
{
	int length_counter = 0;

	switch (format)
	{
	case 'c':
		print_char(args, &length_counter);
		break;
	case 's':
		print_string(args, &length_counter);
		break;
	case 'd':
	case 'i':
		print_int(args, &length_counter);
		break;
	case '%':
		_putchar('%');
		length_counter++;
		break;
	default:
		_putchar('%');
		_putchar(format);
		length_counter += 2;
		break;
	}
	return (length_counter);
}
/**
 * _printf - Prints anything
 * @format: The format string
 *
 * Return: The amount of characters printed
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
			len += process_format(format[i + 1], args);
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
