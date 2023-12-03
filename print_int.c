#include <stdarg.h>
#include "main.h"
/**
 * print_int - Prints a decimal (base 10) number
 * @args: The name for va_list
 * @length_counter: The amount of characters printed
 */
void print_int(va_list args, int *length_counter)
{
unsigned int i = 1;
	int number = va_arg(args, int);

	if (number < 0)
	{
	_putchar('-');
		number = -number;
		(*length_counter)++;
	}
	while ((number / i) / 10 != 0)
	{
	i *= 10;
		(*length_counter)++;
	}
	while (i != 1)
	{
	_putchar((number / i) + '0');
		number = number % i;
		i /= 10;
	}
	(*length_counter)++;
	_putchar((number % 10) + '0');
}
