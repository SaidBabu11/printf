#include "main.h"
/**
 * _printf - print
 *
 * @format: input format
 * Return: return integers
 */
int _printf(const char *format, ...)
{
	int i, print = 0;
	va_list arg;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			write(1, &format, 1);
		else
		{
			print = handle_printf(format, &i, arg);
			if (print == -1)
				return (-1);
		}
	}
	va_end(arg);
	return (print);
}
