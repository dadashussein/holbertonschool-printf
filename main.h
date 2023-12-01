#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int _printf(const char *format, ...);

void print_string(va_list string_list, int *length_counter);
void print_char(va_list char_list, int *length_counter);
void print_int(va_list int_list, int *num_digits);

#endif /*MAIN_H */
