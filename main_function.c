#include "main.h"

/**
 * _printf - print
 *
 * @format: input format
 * Return: return integers
 */
int _printf(const char *format, ...)
{
    int i, print = 0, char_print = 0;
    va_list arg;

    if (format == NULL)
        return (-1);

    va_start(arg, format);

    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            char_print++;
        }
        else
        {
            ++i;
            print = handle_printf(format, &i, arg);
            if (print == -1)
                return (-1);
            char_print += print;
        }
    }

    va_end(arg);
    return (char_print);
}

/**
 * handle_printf - Prints an argument based on its type
 * @fmt: Formatted string in which to print the arguments.
 * @list: List of arguments to be printed.
 * @ind: ind.
 * Return: return 1 or 2
 */
int handle_printf(const char *fmt, int *ind, va_list list)
{
    int i;
    int printed_chars = -1;
    fmt_t fmt_types[] = {
        {'c', print_char}, {'s', print_strings}, {'%', print_Percent}, {'\0', NULL}};
    for (i = 0; fmt_types[i].fmt != '\0'; i++)
    {
        if (fmt[*ind] == fmt_types[i].fmt)
            printed_chars = fmt_types[i].fnc(list);
    }
    if (fmt_types[i].fmt == '\0')
    {
        if (fmt[*ind] == '\0')
            return (-1);
    }
    return (printed_chars);
}

/**
 * print_char - print character
 *
 * @value: list of arguments
 * Return: no. chars printed
 */
int print_char(va_list value)
{
    char c = va_arg(value, int);

    return (write(1, &c, 1));
}

/**
 * print_strings - print strings
 *
 * @value: strings valus
 * Return: no. printed chars
 */
int print_strings(va_list value)
{
    int len = 0, i;
    char *str;

    str = va_arg(value, char *);
    if (str == NULL)
    {
        str = "(null)";
    }

    while (str[len] != '\0')
    {
        len++;
    }

    return (write(1, str, len));
}

/**
 * print_Percent - print percentage sign
 *
 * @value: list of arguments
 * Return: no. printed chars
 */
int print_Percent(va_list value)
{
    UNUSED(value);
    return (write(1, "%%", 1));
}
