#include "main.h"
#include <stdarg.h>
/**
 * print_binary - Prints a decimal (base 10) number
 * @args: The name for va_list
 * @length_counter: The amount of characters printed
 * Return: The amount of characters printed
 */
int print_binary(va_list args, int *length_counter)
{
	unsigned int n = va_arg(args, unsigned int);
	int i, j, count = 0;
	int arr[100];

	if (n == 0)
	{
		_putchar('0');
		*length_counter += 1;
		return (1);
	}
	for (i = 0; n > 0; i++)
	{
		arr[i] = n % 2;
		n /= 2;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(arr[j] + '0');
		count++;
	}
	*length_counter += count;
	return (count);
}
