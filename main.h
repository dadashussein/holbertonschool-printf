#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
void print_string(va_list string_list, int *length_counter);
void print_char(va_list char_list, int *length_couter);
void print_int(va_list args, int *length_counter);
int print_binary(va_list args, int *length_counter);
#endif /*MAIN_H */
