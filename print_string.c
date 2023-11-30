#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
 * print_string - Prints a string
 * @string_list: Pointer to the va_list containing the string
 * @length_counter: Pointer to the length counter
 */
void print_string(va_list string_list, int *length_counter)
{
	char *str = va_arg(string_list, char *);

	if (str == NULL)
	{
		write(1, "(null)", 6);
		(*length_counter) += 6;
	}
	else
	{
		write(1, str, strlen(str));
		(*length_counter) += strlen(str);
	}
}
