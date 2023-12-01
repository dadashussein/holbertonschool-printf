#include <stdarg.h>
#include "main.h"
/**
 * print_int - Prints integers.
 * @int_list: Pointer to the va_list containing the int.
 * @num_digits: Pointer to the length counter.
 */

void print_digits(int num)
{
    if (num >= 10)
        print_digits(num / 10);
    _putchar((num % 10) + '0');
}

void print_int(va_list int_list, int *num_digits)
{
    int num = va_arg(int_list, int);
    int temp_num = (num < 0) ? -num : num;
    int count = 0;

    if (num < 0) {
        _putchar('-');
        num = -num;
    }

    print_digits(num);

    while (temp_num != 0) {
        temp_num /= 10;
        count++;
    }

    (*num_digits) += count;
}
