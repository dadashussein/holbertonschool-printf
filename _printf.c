#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/**
 * _printf - produces output according to a format
 * @format: character string
 *
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
    int i = 0;
    char *str;

    va_list valist;
    va_start(valist, format);


  while (format && format[i]) {
    if (format[i] == '%') {
      i++;
      switch (format[i]) {
      case 'c':
        _putchar(va_arg(valist, int));
        break;
      case 's': {
        str = va_arg(valist, char *);
        while (*str) {
          _putchar(*str);
          str++;
        }
        break;
      }
      case '%': {
        _putchar('%');
      }
      }
    } else {
      _putchar(format[i]);
    }

    i++;
  }
}
