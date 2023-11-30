#include <stdarg.h>
#include "main.h"
/**
 * print_char - Prints a character
 * @char_list: Pointer to the va_list containing the character
 * @length_counter: Pointer to the length counter
 */
void print_char(va_list char_list, int *length_counter)
{
	_putchar(va_arg(char_list, int));
	(*length_counter)++;
}
